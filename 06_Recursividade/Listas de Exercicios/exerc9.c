#include<stdio.h>
int potenciacao(int base, int expoente)
{
	if(expoente==0) return 1;
	else return base * potenciacao(base, expoente-1);
}
int main()
{
	int x, y;
	printf("\nEntre com a base:");
	scanf("%d", &x);
	printf("\nEntre com o expoente:");
	scanf("%d", &y);
	printf("\n\nO resultado de %d ^ %d eh %d",
		x, y, potenciacao(x,y));
	return 0;
}
