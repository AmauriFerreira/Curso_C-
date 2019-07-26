#include <stdio.h>

int main()
{ //inicio      

	float peso, altura, imc;

	printf("\nDigite seu peso (kg): ");
	scanf("%f", &peso);
	printf("\nDigite sua altura (m): ");
	scanf("%f", &altura);

	imc = peso / (altura*altura);

	printf("\nSeu IMC vale: %.2f\n", imc);

	// Operadores logicos:
	// E -> &&
	// OU -> ||
	// NAO -> !
	
	if(imc < 18)
	{
	    printf("Voce esta abaixo do peso.\n");
	} //fimSe
	if(imc >= 18 && imc <= 25)
	{
	    printf("Voce esta em forma.\n");
	}
	if(imc > 25 && imc <= 30)
	{
	    printf("Voce esta com sobrepeso.\n");
	}
	if(imc > 30)
	{
	    printf("Excesso de peso.\n");
	}

	return 0;
} //fim

