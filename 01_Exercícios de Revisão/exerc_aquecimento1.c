/*
   Leia dez números e encontre o maior e o
   menor
*/
#include <stdio.h>
#include <limits.h>
int main()
{
	int maior=INT_MIN, menor=INT_MAX, num, cont=0;	
	printf("Informe 10 numeros: ");
	
	while(cont<10){
		scanf("%d",&num);		
		if (num>maior) {
			maior=num;
		}
		if (num<menor){
			menor=num;
		}	
		cont++;
	}
	printf("\nO maior numero e: %d", maior);
	printf("\nO menor numero e: %d", menor);
	return 0;
}
