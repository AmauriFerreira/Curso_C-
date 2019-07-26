#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct ficha
{
	char nome[40];
	char telefone[20];
	char email[40];
	int idade;
};

int main()
{
	struct ficha agenda[100];
	int fichas_existentes = 0, proxima = 0;
	int opcao=0;

	while(opcao != 5)
	{
		printf("\nEntre com a opcao desejada:\n");
		printf("\n1) Inserir ficha:");
		printf("\n2) Procurar por nome:");
		printf("\n3) Listar toda a base:");
		printf("\n4) Excluir por nome:");
		printf("\n5) Sair\n\n");
		scanf("%d", &opcao);
		getchar(); //só para ler o ENTER residual

		if(opcao == 1) //inserir
		{
			printf("\nEntre com um nome:");
			gets(agenda[proxima].nome);
			printf("\nEntre com um telefone:");
			gets(agenda[proxima].telefone);
			printf("\nEntre com a idade:");
			scanf("%d", &agenda[proxima].idade);
			getchar(); //só para ler o ENTER residual
			printf("\nEntre com um e-mail:");
			gets(agenda[proxima].email);
			fichas_existentes++;
			proxima++;
		}
		if(opcao == 2) //procurar
		{
			char procurado[40];
			printf("\nEntre com o nome procurado:");
			gets(procurado);

			bool achei = false; //nao achei
			int i;
			for(i=0; i<fichas_existentes; i++)
			{
			  //Ignorando Maiusculas/Minusculas:
			  //if(strcasecmp(procurado, agenda[i].nome) == 0)
			  if(strcmp(procurado, agenda[i].nome) == 0)
			  {
			    achei = true; //achei!!
			    printf("\n\nO telefone de %s eh %s, o e-mail eh %s e a idade eh %d\n",
			      agenda[i].nome, agenda[i].telefone, agenda[i].email, agenda[i].idade);
			    //depois de achar nao preciso procurar mais
			    break;
			  }
			}
			if(achei == false)
			{
			  printf("\n\nNome nao encontrado\n");
			}
		}
		if(opcao == 3) //listar tudo
		{
			printf("\n\n");
			int i;
			for(i=0; i<fichas_existentes; i++)
			{
			    printf("O telefone de %s eh %s, o e-mail eh %s e a idade eh %d\n",
			      agenda[i].nome, agenda[i].telefone, agenda[i].email, agenda[i].idade);
			}
			if(fichas_existentes == 0)
				printf("A base de dados esta vazia!\n");
		}
		if(opcao == 4) //excluir
		{
			char procurado[40];
			printf("\nEntre com o nome que sera excluido:");
			gets(procurado);

			bool achei = false; //nao achei
			int i;
			for(i=0; i<fichas_existentes; i++)
			{
			  //Ignorando Maiusculas/Minusculas:
			  //if(strcasecmp(procurado, agenda[i].nome) == 0)
			  if(strcmp(procurado, agenda[i].nome) == 0)
			  {
			    achei = true; //achei!!
			    printf("\n\nO telefone de %s, que eh %s, o e-mail eh %s e a idade eh %d, sera removido\n", agenda[i].nome, agenda[i].telefone, agenda[i].email, agenda[i].idade);
			    int j;
			    for(j=i+1; j<fichas_existentes; j++)
			    {
					agenda[j-1] = agenda[j];
			    }
			    fichas_existentes--;
			    proxima--;
			    break;
			  }
			}
			if(achei == false)
			{
			  printf("\n\nNome nao encontrado\n");
			}

		}
	}
	return 0;
}
