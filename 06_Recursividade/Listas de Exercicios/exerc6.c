#include<stdio.h>

/*
	1/1 - 1/2 + 1/3 - 1/4 + 1/5 - ... +/- 1/(N-1) +/- 1/N
*/
double expressao(int N)
{
	if(N==1) return 1.0;
	else if(N%2!=0) return expressao(N-1) + 1.0/N;
	else return expressao(N-1) - 1.0/N;
}
int main()
{
	int x;
	printf("\nEntre com um valor inteiro:");
	scanf("%d", &x);
	printf("\n\nO resultado da expressão eh %lf",
		expressao(x));
	return 0;
}
