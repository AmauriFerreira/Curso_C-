#include <stdio.h>

int main()
{
	int a, b;
	a=3;
	b=5;

	printf("\nO conteudo da variavel a eh %d\n", a);
	printf("\nA variavel a esta no endereco %p da memoria\n", &a);
	printf("\nO conteudo da variavel b eh %d\n", b);
	printf("\nA variavel b esta no endereco %p da memoria\n", &b);

	int *p;  /* variavel ponteiro para inteiros. Isso significa
			que em p sera guardado um endereco de memoria,
			e nesse endereco havera numeros inteiros */
	p = &a; 
	printf("\nA variavel p contem o endereco de memoria de a: %p\n", p);
	*p = 2; /* O operador * tem dois significados:
		Na declaracao indica que a variavel eh um endereco de
		memoria ou um ponteiro. Fora a declaracao, ele significa
		conteudo daquela posicao de memoria */

	printf("\nO novo conteudo da variavel a eh %d\n", a);

	return 0;
}
