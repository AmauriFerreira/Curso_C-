#include <stdio.h>

//Este procedimento NAO funciona!!
void troca(int a, int b) //passagem de parametros por VALOR
{
	int aux;
	aux = a;
	a = b;
	b = aux;
	printf("\na = %d, b = %d\n", a, b);
}

int main()
{
	int x = 3, y = 5;
	printf("\nx = %d, y = %d\n", x, y);
	troca(x, y);
	printf("\nx = %d, y = %d\n", x, y);

	return 0;
}
