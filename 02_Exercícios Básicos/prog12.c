#include <stdio.h>
#include <math.h>
/*
   Calcule o valor da expressao: 1/2 + 1/4 + 1/8
	+ 1/16 + ...... + 1/2048
*/

//Para compilar: gcc prog12.c -lm -o prog12

int main()
{ //inicio
	int cont;
	float soma = 0;

	for(cont=1;cont<=11;cont=cont+1)     
	{
	   soma = soma + 1/pow(2,cont);
	}
	printf("\nA expressao vale %f\n", soma);	
	return 0;
} //fim

