#include<stdio.h>
int exerc1(int n)
{
   if(n==0) return 0;
   else return exerc1(n-1) + n;

}
int main()
{
	int x;
	printf("\nDigite um numero inteiro:");
	scanf("%d", &x);
	printf("\nA resposta eh %d\n", exerc1(x));
	return 0;
}
