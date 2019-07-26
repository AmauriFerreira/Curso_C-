#include<stdio.h>
#include<stdlib.h>

//Isso NAO funciona adequadamente, pois tento retornar uma variavel local (vetor)
int * funcao()
{
   int i, vetor[10];   
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
