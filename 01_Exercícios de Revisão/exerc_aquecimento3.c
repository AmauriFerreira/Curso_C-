/*
   Leia dez números e encontre o maior e o
   segundo maior
*/
#include<stdio.h>
int main()
{
	int maior, segundomaior, num, cont=0;
	printf("Digite 10 numeros");
	scanf("%d",&maior);
	scanf("%d",&segundomaior);
	if(segundomaior>maior)
	{
		num = maior;
		maior = segundomaior;
		segundomaior = num;
	}
	do{
		scanf("%d",&num);	
		if(num>maior){
			segundomaior=maior;
			maior=num;
		}
		else{
			if(num>segundomaior){
				segundomaior = num;
			}
		}
		cont++;
	}while (cont < 8);
	 
	printf("\nO maior eh %d e o segundo eh %d", maior, segundomaior);
	return 0;
}
