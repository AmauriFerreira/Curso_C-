/*
Lista de funções e procedimentos:
(FÁCIL)
3) Crie uma função em C que receba um vetor de números
inteiros e retorne a média aritmética (real) de seus elementos.
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
	printf("\nA média dos elementos do vetor vale %f",
		mediaVet(x,6));
	return 0;
}
