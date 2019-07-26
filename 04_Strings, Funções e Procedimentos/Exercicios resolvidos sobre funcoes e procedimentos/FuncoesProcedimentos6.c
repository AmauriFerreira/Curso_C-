/*
Lista de fun��es e procedimentos:
(F�CIL)
6) Crie uma fun��o em C que receba um vetor de n�meros
inteiros e um valor inteiro que ser� procurado no vetor.
Este m�todo retornar� o primeiro �ndice em que encontrar
o referido elemento, ou -1, caso n�o exista.
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
	printf("\nDigite o n�mero procurado:");
	scanf("%d", &proc);
	resp = procurar(x, 6, proc);
	if(resp == -1)
		printf("\O n�mero n�o existe no vetor");	
	else printf("\O n�mero existe no �ndice %d", resp);	
	return 0;
}
