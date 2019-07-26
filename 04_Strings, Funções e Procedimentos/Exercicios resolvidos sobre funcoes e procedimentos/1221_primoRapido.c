/*
	Problema 1221 do URI - Primo Rapido
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool primoRapido(int N)
{
	int i;
	if(N==1) return false;
	int limite = sqrt(N);
	for(i=2; i<=limite; i++)
	{
		if(N%i == 0) return false;
	}
	return true;
}
int main()
{
	int i, N, x;
	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		scanf("%d", &x);
		if(primoRapido(x)) printf("Prime\n");
		else printf("Not Prime\n");
	}
	return 0;
}







