#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
/* Rascunho de outro algoritmo de calend�rio */

bool bissexto(int ano)
{
	if(ano%400==0) return true;
	else if(ano%100==0) return false;
	else if(ano%4==0) return true;
	else return false;
}

int main()
{
	int dia, mes, ano, linha, resposta;
	
	printf("\nDigite a data no formato DD/MM/AAAA: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	/*
	   diferenca1: � a diferen�a em dias da data
	   fornecida, DD/MM/AAAA, at� 01/01/AAAA
	*/
	int diasAcumulados[12]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	int diferenca1 = (dia-1) + (diasAcumulados[mes-1]);
	printf("\nResposta = %d\n", diferenca1);
	if(bissexto(ano) && (mes>=3 || (mes==2 && dia==29)))
		diferenca1++;
		
	if(bissexto(ano)) printf("\n%d � bissexto\n", ano);
	else printf("\n%d N�O � bissexto\n", ano);
	
	printf("\nResposta = %d\n", diferenca1);
	
	// 01/01/2000 foi um s�bado
	
	/*
	   diferenca2: � a diferen�a em dias da data
	   01/01/AAAA at� 01/01/2000.
	*/
	
	int diferenca2 = (ano-2000)*365;
	if(ano>=2000)
	{
		int aux
	}
	switch(resposta){
		case 0: printf("\nDomingo"); break;
		case 1: printf("\nSegunda-feira"); break;
		case 2: printf("\nTer�a-feira"); break;
		case 3: printf("\nQuarta-feira"); break;
		case 4: printf("\nQuinta-feira"); break;
		case 5: printf("\nSexta-feira"); break;
		case 6: printf("\nS�bado");
	}

	return 0;
}
