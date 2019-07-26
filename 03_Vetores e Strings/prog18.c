#include <stdio.h>
#include <stdlib.h>
int main()
{
	//declaracao de vetor de inteiros com TAMANHO 10
	int vetor[10];
	int i; // i sera meu indice e contador

	printf("\nEntre com 10 numeros:\n");
	for(i=0; i<=9; i=i+1)
	{
	   scanf("%d", & vetor[i]);
	}
	printf("\n\nMostrando de tras para frente:\n\n");
	for(i=9; i>=0; i=i-1)
	{
	   printf("%d  ", vetor[i]);
	}

	printf("\n");
	return 0;
}








