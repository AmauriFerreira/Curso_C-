#include<stdio.h>
int main()
{
	int cpf[11];
	int mult1[9]={10,9,8,7,6,5,4,3,2};
	int mult2[10]={11,10,9,8,7,6,5,4,3,2};
	int i, soma=0, resto1, verif1, resto2, verif2;
	for(i=0;i<9;i++)
	{
		printf("\nEntre com um digito do seu CPF: ");
		scanf("%d", &cpf[i]);
		soma = soma + cpf[i] * mult1[i];
	}
	resto1 = soma % 11;
	if(resto1<2)
	{
		verif1 = 0;
	}
	else{
		verif1 = 11 - resto1;
	}
	cpf[9] = verif1;
	printf("\nO primeiro digito verificador vale %d ", verif1);
	
	soma = 0;
	
	for(i=0;i<10;i++)
	{
		soma = soma + cpf[i] * mult2[i];
	}
	resto2 = soma % 11;
	if(resto2<2)
	{
		verif2 = 0;
	}
	else{
		verif2 = 11 - resto2;
	}
	cpf[10] = verif2;
	printf("\nO segundo digito verificador vale %d ", verif2);	
	
	return 0;
}







