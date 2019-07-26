#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Um outro jeito de criar um vetor usando alocacao dinamica e ponteiros

	int * vetor;
	int i;
	vetor = (int *) malloc( 10 * sizeof(int) );

	printf("\nDigite 10 numeros inteiros:\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &vetor[i]);
	}

	printf("\n\nOs elementos do vetor sao:\n");
	for(i=0; i<10; i++)
	{
		printf("%d  ", vetor[i]);
	}
	
	return 0;
}
