#include <stdio.h>
#include <string.h>
int main()
{
	char ch = '0';
	printf ("\nO caractere %c tem codigo ASCII %d\n", ch, ch);
	ch = ch + 1;
	printf ("\nO caractere %c tem codigo ASCII %d\n", ch, ch);
	ch = '9';
	printf ("\nO caractere %c tem codigo ASCII %d\n", ch, ch);
	printf("\nDigite um caractere apenas e eu vou descobrir se ele e digito ou nao: ");
	scanf("%c", & ch);

	int convertido;
	if(ch >= '0' && ch <= '9')
	{
	   printf("\nE digito mesmo!!\n");
	   convertido = ch - '0';
	   printf("\nO digito que voce entrou equivale ao numero inteiro %d\n", convertido);
	}
	else
	{
	   printf("\nNAO e digito!!\n");
	}
	return 0;
}








