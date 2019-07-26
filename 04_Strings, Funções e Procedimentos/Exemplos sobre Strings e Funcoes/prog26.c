#include <stdio.h>

int somaVetor(int vetor[], int tamanho)
{
	int soma = 0, i;
	for(i=0; i<tamanho; i=i+1)
	{
	   soma = soma + vetor[i];
	}
	return soma;
}

float mediaVetor(int vetor[], int tamanho)
{
//Abaixo temos um exemplo de casting ou conversao forcada:
//Quando faco (float)tamanho, o valor dessa variavel torna-se real
	return somaVetor(vetor, tamanho) / (float)tamanho;
}

int main()
{
	int vet1[]={1,2,3,4,5,6,7,8,9,10};
	int vet2[]={3,7,12,15,6,4,-2,0,16,14};
	printf("\nA soma dos elementos do primeiro vetor e %d\n", somaVetor(vet1, 10));
	printf("\nA media dos elementos do primeiro vetor e %f\n", mediaVetor(vet1, 10));
	printf("\nA soma dos elementos do segundo vetor e %d\n", somaVetor(vet2, 10));
	printf("\nA media dos elementos do segundo vetor e %f\n", mediaVetor(vet2, 10));

	return 0;
}
