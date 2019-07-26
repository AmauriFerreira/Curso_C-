#include <stdio.h>
/*
	Leia 10 numeros e conte quantos estao 
	acima de sua media aritmetica.
*/
int main()
{ //inicio
	int vetor[10], i, acima=0;
	float soma=0, media;

	for(i=0; i<10; i=i+1)
	{
	   printf("\nEntre com um numero:");
	   scanf("%d", & vetor[i]);
	   soma = soma + vetor[i];
	}
	media = soma / 10;
	printf("\nA media aritmetica vale %f.\n", media);

	for(i=0; i<10; i=i+1)
	{
	   if(vetor[i]>media)
	   {
	      acima = acima + 1;
	   }
	}

	printf("\nHa %d numeros acima da sua media.\n", acima);
	return 0;
} //fim

