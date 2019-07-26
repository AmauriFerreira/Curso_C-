#include <stdio.h>
int main()
{ //inicio
	//O numero dentro da declaracao representa
	//o TAMANHO do vetor, NAO o ultimo indice
	int vetor[10], i;

	for(i=0; i<10; i=i+1)
	{
	   printf("\nEntre com um numero:");
	   scanf("%d", & vetor[i]);
	}
	printf("\nVoce digitou: ");
	for(i=0; i<10; i=i+1)
	{
	   if(i<9)
	   {
	      printf("%d, ", vetor[i]);
	   }
	   else
	   {
	      printf("%d.\n\n", vetor[i]);
	   }
	}
	return 0;
} //fim

