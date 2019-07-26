/*
1) Crie uma função procurar, com a assinatura abaixo,
de modo que ela possa ser aproveitada tanto na funcionalidade
procurar, quanto na excluir:

int procurar(char procurado[], struct ficha vetor[], int num_fichas)

O retorno dessa função será o índice do elemento encontrado,
ou -1, caso o mesmo não tenta sido localizado.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct ficha
{
	char nome[40];
	char telefone[20];
};

int procurar(char procurado[], struct ficha vetor[],
int num_fichas)
{
	int i;
	for(i=0; i<num_fichas; i++)
	{
	  //Ignorando Maiusculas/Minusculas:
	  //if(strcasecmp(procurado, vetor[i].nome) == 0)
	  if(strcmp(procurado, vetor[i].nome) == 0)
	  {
	    return i;
	  }
	}
	return -1;
}


int main()
{
	struct ficha agenda[100];
	int fichas_existentes = 0, proxima = 0;
	char opcao[10]="0";

	while(opcao[0] != '5')
	{
		printf("\nEntre com a opcao desejada:\n");
		printf("\n1) Inserir ficha:");
		printf("\n2) Procurar por nome:");
		printf("\n3) Listar toda a base:");
		printf("\n4) Excluir por nome:");
		printf("\n5) Sair\n\n");
		gets(opcao);

		if(opcao[0] == '1') //inserir
		{
			printf("\nEntre com um nome:");
			gets(agenda[proxima].nome);
			printf("\nEntre com um telefone:");
			gets(agenda[proxima].telefone);
			fichas_existentes++;
			proxima++;
		}
		if(opcao[0] == '2') //procurar
		{
			char procurado[40];
			printf("\nEntre com o nome procurado:");
			gets(procurado);
			int resposta = procurar(procurado, agenda,
fichas_existentes);
			if(resposta == -1)
				printf("\n\nNome nao encontrado\n");
			else printf("\n\nO telefone de %s eh %s\n",
			    agenda[resposta].nome,
				agenda[resposta].telefone);	
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
			int resposta = procurar(procurado, agenda,
fichas_existentes);
			if(resposta == -1)
				printf("\n\nNome nao encontrado\n");
			else
			{
				printf("\n\nO telefone de %s eh %s\n",
			    agenda[resposta].nome,
				agenda[resposta].telefone);	
				int j;
			    for(j=resposta+1; j<fichas_existentes; j++)
			    {
					agenda[j-1] = agenda[j];
			    }
			    fichas_existentes--;
			    proxima--;
			}
		}
	}
	return 0;
}
