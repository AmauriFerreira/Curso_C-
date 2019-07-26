#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char ch;
	char texto[100];

	ch = 'A';
	// %d relaciona-se com numero inteiro decimal
	// %f relaciona-se com numero real
	// %c relaciona-se com caractere
	// %s relaciona-se com String ou texto
	printf("\nO tipo char serve para guardar caracteres como este %c\n", ch);
printf("\n\nVamos mostrar um trecho da tabela ASCII\n\nCarac.\tCodigo\n");
	for(i=' ';i<='z'; i=i+1)
	{
	   printf("%c\t%d\n", i, i);
	}

	printf("\nDigite agora um texto pequeno: ");
	gets(texto); //leitura de um texto
	printf("\nMostrando os caracteres presentes na variavel texto: ");
	for(i=0; i<100; i=i+1)
	{
	   printf("%c", texto[i]);
	}

	printf("\nA maneira de mostrar o texto acima nao e correta. So serve para vermos o lixo presente na memoria. Vamos mostrar agora do jeito correto:\n\n");
	printf("%s\n", texto);
	printf("\nVamos mostrar qual e o tamanho do texto digitado: %d\n", strlen(texto));
	return 0;
}








