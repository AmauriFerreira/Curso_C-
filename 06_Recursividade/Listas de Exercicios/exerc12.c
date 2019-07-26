#include<stdio.h>
int MDC(int a, int b)
{
	if(a%b==0) return b;
	else return MDC(b, a%b);
}
int main()
{
	int x, y;
	printf("\nEntre com o primeiro valor:");
	scanf("%d", &x);
	printf("\nEntre com o segundo valor:");
	scanf("%d", &y);
	printf("\n\nO MDC de %d e %d eh %d",
		x, y, MDC(x,y));
	return 0;
}




