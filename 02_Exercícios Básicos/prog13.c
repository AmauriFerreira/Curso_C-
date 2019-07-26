#include <stdio.h>
/*
   Leia 10 numeros e mostre o segundo maior.
*/
int main()
{ //inicio
	int maior, segundo, x, cont;
	printf("\nDigite dois numeros: ");
	scanf("%d%d", &maior, &x);
	if(maior > x)
	{
	   segundo = x;
	}
	else
	{
	   segundo = maior;
	   maior = x;
	}

	for(cont=1; cont<=8; cont=cont+1)
	{
	   printf("\nDigite outro numero:");
	   scanf("%d", &x);
	   if(x > maior)
	   {
	      segundo = maior;
	      maior = x;
	   }
	   else
	   {
	      if(x > segundo)
	      {
	         segundo = x;
	      }
	   }
	}//fim do loop for
	
	printf("\nO maior e %d e o segundo maior e %d\n\n", maior, segundo);
	return 0;
} //fim

