/*
Lista de fun��es e procedimentos:
(F�CIL)
3) Crie uma fun��o em C que receba um vetor de n�meros
inteiros e retorne a m�dia aritm�tica (real) de seus elementos.
*/
#include <stdio.h>
int somaVet (int vet[], int N)
{
	int i, soma=0;
	for(i=0; i<N; i++)
	{
		soma = soma + vet[i];
	}
	return soma;
}

float mediaVet(int vet[], int N)
{
	return somaVet(vet, N) / (float)N;
}

int main()
{
	int x[]={-2,5,7,12,15,20};
	
	printf("\nA soma dos elementos do vetor vale %d",
		somaVet(x,6));
	printf("\nA m�dia dos elementos do vetor vale %f",
		mediaVet(x,6));
	return 0;
}
