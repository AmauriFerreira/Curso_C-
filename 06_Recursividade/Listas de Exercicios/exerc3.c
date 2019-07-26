#include<stdio.h>
int exerc3(int n, int vet[])
{
   if(n==0) return vet[0];
   else return exerc3(n-1, vet) + vet[n];

}
int main()
{
	int vet[]={5,3,9,4,2,7};
	int x;
	printf("\nDigite um indice:\n");
	scanf("%d", &x);
	printf("\nA resposta eh %d\n", exerc3(x, vet));
	return 0;
}
