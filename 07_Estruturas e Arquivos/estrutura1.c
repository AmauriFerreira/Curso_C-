#include <stdio.h>



	struct ficha
	{
		char nome[40];
		char telefone[20];
	};

	


int main(){


	

	struct ficha agenda[100];

	printf("\nEntre com um nome:");
	gets(agenda[0].nome);
	printf("\nEntre com um telefone:");
	gets(agenda[0].telefone);
	
	printf("\nVoce digitou o nome %s e o telefone %s",
		agenda[0].nome,	agenda[0].telefone);

	return 0;
}
