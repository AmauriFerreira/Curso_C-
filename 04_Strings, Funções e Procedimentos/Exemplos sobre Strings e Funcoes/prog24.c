#include <stdio.h>

int soma(int a, int b)
{
	printf("\nAcabei de entrar na funcao soma.\n");
	return a + b;
}

int main()
{
	int x, y, z;
	printf("Entre com dois numeros inteiros: ");	
	scanf("%d%d", &x, &y);
	printf("\nAinda estou na funcao main.\n");
	z = soma(x,y);
	printf("\nVoltei para a funcao main.\n");
	printf("\nA soma dos numeros vale %d\n", z);
	return 0;
}
