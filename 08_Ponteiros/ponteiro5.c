#include <stdio.h>

int main()
{
	char x[]={'a','b','c','d','e','f','g','h'};
	int i;
	
	for(i=0; i<8; i=i+1)
	{
		printf("%c  ", x[i]);
	}

	printf("\n\nDe outro jeito: \n");

	char *p = x; //endereco do inicio do vetor ( &x[0] )
	for(i=0; i<8; i++)
	{
		printf("Endereco %p -> Conteudo %c \n", p, *x);
		p = p + 1; /* O mais um NAO significa somar um byte,
				mas uma posicao completa; neste caso,
				o espaco de um caractere */
	}

	printf("\n\n");
	return 0;
}
