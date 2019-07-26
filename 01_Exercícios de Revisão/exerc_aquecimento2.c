/*
   Calcule o resultado de 1/2 + 1/4 + 1/8 + ...
   .. + 1/1024 + 1/2048
*/
#include<stdio.h>
int main()
{
	float soma=0, fracao=0.5;
	int cont=1; 
	while(cont <=11){
		soma = soma + fracao;
		fracao = fracao / 2;
		cont++;
	}
	printf("\nO resultado é: %f", soma);
	return 0;
}
