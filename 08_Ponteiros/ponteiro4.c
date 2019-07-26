#include <stdio.h>

int main()
{
	int x[]={3,8,4,5,2,9,7,1};
	int i;
	
	for(i=0; i<8; i=i+1)
	{
		printf("%d  ", x[i]);
	}

	printf("\n\nDe outro jeito: \n");

	int *p = x; //endereco do inicio do vetor ( &x[0] )
	for(i=0; i<8; i++)
	{
		printf("Endereco %p -> Conteudo %d \n", p, *p);
		p = p + 1; /* O mais um NAO significa somar um byte,
				mas uma posicao completa; neste caso,
				o espaco de um numero inteiro */
	}

	printf("\n\n");
	return 0;
}
