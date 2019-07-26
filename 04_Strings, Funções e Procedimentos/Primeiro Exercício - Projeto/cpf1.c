#include<stdio.h>
int main()
{
	int cpf[11];
	int mult1[9]={10,9,8,7,6,5,4,3,2};
	int i, soma=0, resto1, verif1;
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
	return 0;
}







