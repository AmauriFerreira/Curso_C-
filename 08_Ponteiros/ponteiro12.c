#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, *vetor;   
	vetor = (int *) malloc( 4 * sizeof(int) );
	printf("\nDigite 4 numeros inteiros:\n");
	for(i=0; i<4; i++)
	{
		scanf("%d", &vetor[i]);
	} 
	printf("\n\nO vetor esta alocado em %p\n", vetor);
	printf("\n\nOs elementos do vetor sao:\n");
	for(i=0; i<4; i++)
	{
		printf("%d  ", vetor[i]);
	}
	//Realocamos o vetor 
	vetor = (int *) realloc(vetor, 6 * sizeof(int));
	printf("\n\nO vetor foi realocado; agora esta em %p\n", vetor);
	
	printf("\nDigite mais 2 numeros inteiros:\n");
	for(i=4; i<6; i++)
	{
		scanf("%d", &vetor[i]);
	}
	printf("\n\nTodos os elementos do vetor sao:\n");
	for(i=0; i<6; i++)
	{
		printf("%d  ", vetor[i]);
	}
	return 0;
}
