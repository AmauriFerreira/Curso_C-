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
	
	//versao com se-senao
	if(imc < 18)
	{
	    printf("Voce esta abaixo do peso.\n");
	}
	else
	{
	   if(imc <= 25)
	   {
	      printf("Voce esta em forma.\n");
	   }
	   else
	   {
	      if(imc <= 30)
	      {
	          printf("Voce esta com sobrepeso.\n");
	      }
	      else
	      {
	         printf("Excesso de peso.\n");
	      }
	   }
	}

	return 0;
} //fim

