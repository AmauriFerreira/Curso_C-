/* 
Lista basica sobre vetores e strings:
6) Crie um programa em C que receba duas Strings e diga se elas sao 
identicas ou nao (ja existe uma funcao que faz isso, mas crie o seu
algoritmo!!).
*/
#include <Stdio.h>
#include <string.h>
int main()
{
	char texto1[100], texto2[100];
	int i;
	
	printf("\nEntre com um texto:");
	gets(texto1);
	printf("\nEntre com outro texto:");
	gets(texto2);
/*
 -Caso 1: "abc" e "abcd" -> strings diferentes
	porque sao de tamanhos diferentes
 -Caso 2: "Pedro" e "Pedra" -> strings diferentes
	porque uma letra eh diferente
 -Caso 3: "abcdef" e "abcdef" -> strings iguais
	porque todas as letras sao iguais
*/
	if(strlen(texto1) != strlen(texto2)) //caso 1
	{
		printf("\nOs textos sao diferentes");
	}
	else //casos 2 e 3
	{
		for(i=0; i<strlen(texto1); i++)
		{
			if(texto1[i] != texto2[i])
			{
				printf("\nOs textos sao diferentes");
				return 0;
			}
		}
		printf("\nOs textos sao iguais");
	}
	
	return 0;
}
