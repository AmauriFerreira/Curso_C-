/*
Lista de fun��es e procedimentos:
(F�CIL)
5) Crie uma fun��o em C que receba um vetor de n�meros
inteiros e retorne o maior elemento deste.
*/
#include <stdio.h>
int maiorVet (int vet[], int N)
{
	int i, maior=vet[0];
	for(i=1; i<N; i++)
	{
		if(vet[i] > maior)
		{
			maior = vet[i];
		}
	}
	return maior;
}

int main()
{
	int x[]={-2,-5,-7,-12,-15,-20};	
	printf("\nO maior dos elementos do vetor vale %d",
		maiorVet(x,6));
	return 0;
}
