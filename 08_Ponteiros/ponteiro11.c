#include<stdio.h>
#include<stdlib.h>

int * funcao()
{
   int i, *vetor;   
   vetor = (int *) malloc( 10 * sizeof(int) );
   printf("\nDigite 10 numeros inteiros:\n");
   for(i=0; i<10; i++)
   {
      scanf("%d", &vetor[i]);
   }
   return vetor;
}

int main()
{
	int i, *v = funcao(); 
	printf("\n\nOs elementos do vetor sao:\n");
	for(i=0; i<10; i++)
	{
		printf("%d  ", v[i]);
	}
	
	return 0;
}
