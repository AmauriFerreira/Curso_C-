#include <stdio.h>

//Este procedimento funciona!!
void troca(int *a, int *b) //passagem de parametros por REFERENCIA
{
	int aux;
	aux = *a; //conteudo apontado por a
	*a = *b;  //novo conteudo de a sera o conteudo de b
	*b = aux; //novo conteudo de b
}

int main()
{
	int x = 3, y = 5;
	printf("\nx = %d, y = %d\n", x, y);

	troca(&x, &y);
	//passo os enderecos (ponteiros, referencias) de x e y

	printf("\nx = %d, y = %d\n", x, y);

	return 0;
}
