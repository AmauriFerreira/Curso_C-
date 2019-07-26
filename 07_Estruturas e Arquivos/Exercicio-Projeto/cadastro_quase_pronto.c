#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ficha
{
	char nome[40];
	char telefone[20];
};

int procurar(char procurado[], struct ficha vetor[], int num_fichas)
{
   int i;
   for(i=0; i<num_fichas; i++)
   {
      if(strcmp(procurado, vetor[i].nome) == 0)
      {
         return i;
      }
   }
   return -1;
}

int procurarRecursivo(char procurado[], struct ficha vetor[], int inicio, int num_fichas)
{
   if(inicio >= num_fichas) return -1;
   if(strcmp(procurado, vetor[inicio].nome) == 0) return inicio;
   return procurarRecursivo(procurado, vetor, inicio+1, num_fichas);
}

void lerArquivo(char * nomeArquivo, struct ficha vet[], int *num_fichas)
{	
	FILE *fp;
	fp = fopen(nomeArquivo,"r");
	/* Arquivo ASCII, para leitura */
	if(!fp)
	{
		printf( "\nErro na abertura do arquivo\n\n");
		exit(-1);
	}

	//leia numero de fichas
	char buffer[101];
	fgets (buffer, 100, fp); //Primeira linha
    *num_fichas = atoi(buffer);
	int i;
	for(i=0; i < *num_fichas; i++)
	{
       fgets (vet[i].nome, 39, fp);
       //retirando o ENTER do nome lido
       vet[i].nome[strlen(vet[i].nome)-1] = '\0';
       fgets (vet[i].telefone, 19, fp);
       //retirando o ENTER do telefone lido
       vet[i].telefone[strlen(vet[i].telefone)-1] = '\0';
	}
	fclose(fp);
}

void escreverArquivo(char * nomeArquivo, struct ficha vet[], int num_fichas)
{	
	FILE *fp;
	fp = fopen(nomeArquivo,"w");
	/* Arquivo ASCII, para escrita */
	if(!fp)
	{
		printf( "\nErro na abertura do arquivo\n\n");
		exit(-1);
	}

	//escreva o numero de fichas
	fprintf (fp, "%d\n", num_fichas);
	//escrevendo as fichas...
    //cada campo numa linha: nome e telefone
	int i;
	for(i=0; i<num_fichas; i++)
	{
		fprintf(fp, "%s\n", vet[i].nome);
		fprintf(fp, "%s\n", vet[i].telefone);
	}
	fclose(fp);
}

int main()
{
	struct ficha agenda[100];
	int fichas_existentes = 0;
	char opcao[10]="0";

	while(opcao[0] != '7')
	{
		printf("\nEntre com a opcao desejada:\n");
		printf("\n1) Inserir ficha:");
		printf("\n2) Procurar por nome:");
		printf("\n3) Listar toda a base:");
		printf("\n4) Excluir por nome:");
		printf("\n5) Gravar base em arquivo:");
		printf("\n6) Ler base de arquivo:");		
		printf("\n7) Sair\n\n");
		gets(opcao);

		if(opcao[0] == '1') //inserir
		{
			printf("\nEntre com um nome:");
			gets(agenda[fichas_existentes].nome);
			printf("\nEntre com um telefone:");
			gets(agenda[fichas_existentes].telefone);
			fichas_existentes++;
		}
		if(opcao[0] == '2') //procurar
		{
			char procurado[40];
			printf("\nEntre com o nome procurado:");
			gets(procurado);
			int resposta = procurarRecursivo(procurado, agenda, 0, fichas_existentes);
			if(resposta != -1)
			{
			    printf("\n\nO telefone de %s eh %s\n", agenda[resposta].nome, agenda[resposta].telefone);
			}
			else
			{
			  printf("\n\nNome nao encontrado\n");
			}
		}
		if(opcao[0] == '3') //listar tudo
		{
			printf("\n\n");
			int i;
			for(i=0; i<fichas_existentes; i++)
			{
			    printf("O telefone de %s eh %s\n",
			      agenda[i].nome, agenda[i].telefone);
			}
			if(fichas_existentes == 0)
				printf("A base de dados esta vazia!\n");
		}
		if(opcao[0] == '4') //excluir
		{
			char procurado[40];
			printf("\nEntre com o nome que sera excluido:");
			gets(procurado);
			int resposta = procurar(procurado, agenda, fichas_existentes);
			if(resposta != -1)
			{
			    printf("\n\nO telefone de %s, que eh %s, sera removido\n", agenda[resposta].nome, agenda[resposta].telefone);
			    int j;
			    for(j=resposta+1; j<fichas_existentes; j++)
			    {
				agenda[j-1] = agenda[j];
			    }
			    fichas_existentes--;
			}
			else
			{
			  printf("\n\nNome nao encontrado\n");
			}	
		}
		if(opcao[0] == '5') //gravar
		{
			char nomeArquivo[40];
			printf("\nEntre com o nome do arquivo para gravacao:");
			gets(nomeArquivo);
			escreverArquivo(nomeArquivo, agenda, fichas_existentes);
        }
		if(opcao[0] == '6') //ler
		{
			char nomeArquivo[40];
			printf("\nEntre com o nome do arquivo para leitura:");
			gets(nomeArquivo);
			lerArquivo(nomeArquivo, agenda, &fichas_existentes);
        }		
	}
	return 0;
}
