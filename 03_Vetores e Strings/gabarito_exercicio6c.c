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
	int i=0;
	
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
	int diferenca = strcmp(texto1, texto2);
	if( diferenca == 0 )
	{
		printf("\nOs textos sao iguais");
	}
	else
	{
		printf("\nOs textos sao diferentes");
		printf("\nGrau de diferenca: %d", diferenca);
	}
	
	return 0;
}
