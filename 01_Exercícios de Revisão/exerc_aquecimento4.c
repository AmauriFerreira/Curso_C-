/*
   Leia dez n�meros e conte quantos est�o acima
   da sua m�dia aritm�tica
*/
#include<stdio.h>
int main()
{
	int vet[10], cont, soma=0, quant=0;
	float media;
	printf("Entre com dez n�meros:");
	for(cont=0;cont<10;cont++)
	{
		scanf("%d", vet[cont]);
		soma= soma+vet[cont];
	}
	media = soma/10.0;
	for(cont=0;cont<10;cont++)
	{
		if(vet[cont]>media){
			quant++;
		}
	}
	printf("\nH� %d n�meros acima da m�dia", quant);
	return 0;
}
