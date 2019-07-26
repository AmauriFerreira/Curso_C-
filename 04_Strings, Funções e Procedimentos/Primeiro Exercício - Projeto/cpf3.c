#include<stdio.h>

int calculaDigito(int cpf[], int mult[], int N)
{
	int i, soma=0, resto, verif;
	for(i=0;i<N;i++)
	{
		soma = soma + cpf[i] * mult[i];
	}
	resto = soma % 11;
	if(resto<2)
	{
		verif = 0;
	}
	else{
		verif = 11 - resto;
	}
	
	return verif;
}

int main()
{
	int cpf[11];
	int mult1[9]={10,9,8,7,6,5,4,3,2};
	int mult2[10]={11,10,9,8,7,6,5,4,3,2};
	int i;
	for(i=0;i<9;i++)
	{
		printf("\nEntre com um digito do seu CPF: ");
		scanf("%d", &cpf[i]);
	}
	
	cpf[9] = calculaDigito(cpf, mult1, 9);
	printf("\nO primeiro digito verificador vale %d ", cpf[9]);
	
	cpf[10] = calculaDigito(cpf, mult2, 10);
	printf("\nO segundo digito verificador vale %d ", cpf[10]);	
	
	return 0;
}







