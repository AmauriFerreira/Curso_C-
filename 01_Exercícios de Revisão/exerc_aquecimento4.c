/*
   Leia dez números e conte quantos estão acima
   da sua média aritmética
*/
#include<stdio.h>
int main()
{
	int vet[10], cont, soma=0, quant=0;
	float media;
	printf("Entre com dez números:");
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
	printf("\nHá %d números acima da média", quant);
	return 0;
}
