#include <stdio.h>

int main()
{
	double x[]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
	int i;
	
	for(i=0; i<8; i=i+1)
	{
		printf("%f  ", x[i]);
	}

	printf("\n\nDe outro jeito: \n");

	double *p = x; //endereco do inicio do vetor ( &x[0] )
	for(i=0; i<8; i++)
	{
		printf("Endereco %p -> Conteudo %f \n", p, *p);
		p = p + 1; /* O mais um NAO significa somar um byte,
				mas uma posicao completa; neste caso,
				o espaco de um real com dupla precisao */
	}

	printf("\n\n");
	return 0;
}
