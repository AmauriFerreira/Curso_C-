/*
Lista de fun��es e procedimentos:
(F�CIL)
2) Crie uma fun��o em C que receba um vetor de n�meros
inteiros e retorne a soma de seus elementos.
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

int main()
{
	int x[]={-2,5,7,12,15,20}, resultado;
	resultado = somaVet(x,6);
	printf("\nA soma dos elementos do vetor vale %d", resultado);
	return 0;
}
