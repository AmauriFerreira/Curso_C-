/*
Lista de fun��es e procedimentos:
1) Crie uma fun��o em C que receba 2 n�meros inteiros e
retorne o produto deles, sendo que este � calculado por
somas sucessivas. Exemplo: 3 X 4 seria calculado assim:
4 + 4 + 4 = 12, ou seja, somo 3 vezes o 4.
*/
#include <stdio.h>
int produto (int a, int b)
{
	int i, soma=0;
	for(i=1; i<=a; i++)
	{
		soma = soma + b;
	}
	return soma;
}

int main()
{
	int x, y, resultado;
	printf("\nDigite dois n�meros inteiros:");
	scanf("%d%d", &x, &y);
	resultado = produto(x,y);
	printf("\nO produto dos n�meros vale %d", resultado);
	return 0;
}
