/*
Lista de funções e procedimentos:
(FÁCIL)
6) Crie uma função em C que receba um vetor de números
inteiros e um valor inteiro que será procurado no vetor.
Este método retornará o primeiro índice em que encontrar
o referido elemento, ou -1, caso não exista.
*/
#include <stdio.h>
int procurar (int vet[], int N, int procurado)
{
	int i;
	for(i=0; i<N; i++)
	{
		if(vet[i] == procurado)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int x[]={-2,5,7,12,15,20}, proc, resp;
	printf("\nDigite o número procurado:");
	scanf("%d", &proc);
	resp = procurar(x, 6, proc);
	if(resp == -1)
		printf("\O número não existe no vetor");	
	else printf("\O número existe no índice %d", resp);	
	return 0;
}
