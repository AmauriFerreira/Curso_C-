#include <stdio.h>
/*
   Calcule o valor da expressao: 1/2 + 1/4 + 1/8
	+ 1/16 + ...... + 1/2048
*/
int main()
{ //inicio      
	int denominador = 2; 
	float soma = 0;

	while(denominador <= 2048)
	{
	   soma = soma + 1.0/denominador;
	   denominador = denominador * 2;
	}

	printf("\nA expressao vale %f\n", soma);
	return 0;
} //fim

