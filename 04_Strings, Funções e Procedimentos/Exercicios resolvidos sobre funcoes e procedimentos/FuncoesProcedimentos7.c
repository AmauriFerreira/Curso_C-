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
	int i;
	for(i=1; i<=998; i++)
	{
		if(primoRapido(i) && primoRapido(i+2))
			printf("(%d, %d) - ", i, i+2);
	}
	return 0;
}







