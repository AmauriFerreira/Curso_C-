#include <stdio.h>

//Este programa mostra a diferenca entre scanf("%s"... e o gets/fgets
int main()
{
	char  texto1[100], texto2[100];

	printf("\n\nEntre com seu nome completo: ");	
	fgets(texto1, 100, stdin);
	printf("\n\nVeja como o fgets/gets leu seu nome: %s\n", texto1);

	printf("\n\nEntre novamente com seu nome completo: ");	
	scanf("%s", texto2);
	printf("\n\nVeja como o scanf leu seu nome: %s\n", texto2);

	return 0;
}
