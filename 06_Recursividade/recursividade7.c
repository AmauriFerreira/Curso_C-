#include <stdio.h>

int fatorial(int N)
{
	int aux;
	if(N==0)
	{
		printf("\nFATORIAL: Estou na base da recursao e vou retornar 1.\n");
		return 1;
	}
	else
	{
		printf("\nFATORIAL: Estou no caso geral e vou calcular o fatorial de %d para poder calcular o de %d.\n", N-1, N);
		aux = fatorial(N-1);
		printf("\nFATORIAL: Agora sei o valor do fatorial de %d = %d.\n", N-1, aux);
		return N * aux;
	}
}

int main()
{
	int x;
	printf("\nMAIN: Entre com um numero inteiro: ");
	scanf("%d", &x);
	printf("\nMAIN: O fatorial de %d eh %d \n", x, fatorial(x));

	return 0;
}
