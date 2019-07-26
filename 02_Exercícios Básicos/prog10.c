#include <stdio.h>
/*
   Leia uma colecao de 10 numeros e calcule sua
   media aritmetica, seu maior e seu menor valor.
*/
int main()
{ //inicio      
	int cont, numero, soma=0, maior, menor;
	float media;
	
	for (cont=1; cont<=10; cont=cont+1)
	{
	   printf("Entre com um numero: ");
	   scanf("%d", &numero);
	   if(cont == 1)
	   {
	      maior = numero;
	      menor = numero;
	   }
	   if(numero > maior)
	   {
	      maior = numero;
	   }
	   if(numero < menor)
	   {
	      menor = numero;
	   }
	   soma = soma + numero;
	}

	media = soma / 10.0;
	printf("\nO maior numero e: %d", maior);
	printf("\nO menor numero e: %d", menor);
	printf("\nA media aritmetica e: %f\n\n", media);
	return 0;
} //fim

