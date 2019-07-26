#include <stdio.h>

int main()
{
	float peso, altura, imc;

	printf("\nDigite seu peso (kg): ");
	scanf("%f", &peso);
	printf("\nDigite sua altura (m): ");
	scanf("%f", &altura);

	imc = peso / (altura*altura);

	printf("\n\nSeu IMC vale: %.2f\n", imc);
	return 0;
}

