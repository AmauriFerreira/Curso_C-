/*Exercício 7) O PI (3.14159) pode ser aproximado através
  de algumas expressões; quanto maior o valor de n, melhor
  é a aproximação. Implemente recursivamente as expressões
  abaixo:
  a) PI = 2.( 2/1 . 2/3 . 4/3 . 4/5 . 6/5 . 6/7 . 8/7 . 8/9 
          . n/(n-1) . n/(n+1) ), para n par
*/
#include<stdio.h>
double PI (int n)
{
	if(n<2) return 0;
	else if(n==2) return 8.0/3;
	else if(n%2==1) return PI(n+1); 
	else return PI(n-2) * n * n / (n-1) / (n+1);
}
int main()
{
	int x;
	double pi;
	printf("\nEntre com um numero inteiro par, representando a precisao do calculo de PI:");
	scanf("%d", &x);
	pi = PI(x);
	printf("\nO valor de PI eh %lf", pi);
	return 0;
}
