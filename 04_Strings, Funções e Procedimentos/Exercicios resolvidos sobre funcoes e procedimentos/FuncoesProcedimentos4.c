#include<stdio.h>
#include<stdbool.h>

bool primo(int);

int main()
{
	bool resp;
	int numero;
	printf("\nQual numero voce quer saber se eh primo?");
	scanf("%d", &numero);
	resp = primo(numero);
	
	if(resp == true)
		printf("\nO numero eh primo");
	else
		printf("\nO numero NAO eh primo");
		
	return 0;
}

bool primo(int N)
{
	int i, cont=0;
	for(i=1; i<=N; i++)
	{
		if(N%i == 0)
			cont++;
	}
	if(cont==2) return true;
	else return false;
}













