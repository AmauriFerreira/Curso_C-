#include<stdio.h>
#include<string.h>
#include<locale.h>

void leiacpf(char texto[], int cpf[])
{
	int i, j=0, k;
	
	for(i=0; i<strlen(texto) && j<11; i++)
	{
		if(texto[i]>='0' && texto[i]<='9') //teste para saber se eh digito
   		{
      		cpf[j] = texto[i] - 48; //convertendo para inteiro
      		j++;
   		}
	}

	if(j<11)
	{
   		k = 10;
   		for(i=j-1; i>=0; i--)
   		{
      		cpf[k] = cpf[i];
      		k--;
   		}
   		for( ;k>=0; k--)
   		{
      		cpf[k] = 0;
   		}
	}
}

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

void imprimeEstado(int n)
{
	switch(n)
	{
		case 0: printf("Rio Grande do Sul"); break;
		case 1: printf("Distrito Federal, Goiás, Mato Grosso do Sul ou Tocantins"); break;
		case 2: printf("Pará, Amazonas, Acre, Amapá, Rondônia ou Roraima"); break;
		case 3: printf("Ceará, Maranhão ou Piauí"); break;
		case 4: printf("Pernambuco, Rio Grande do Norte, Paraíba ou Alagoas"); break;
		case 5: printf("Bahia ou Sergipe"); break;
		case 6: printf("Minas Gerais"); break;
		case 7: printf("Rio de Janeiro ou Espírito Santo"); break;
		case 8: printf("São Paulo"); break;
		case 9: printf("Paraná ou Santa Catarina"); break;
	}
}

int main()
{
	int cpf[11];
	int mult1[9]={10,9,8,7,6,5,4,3,2};
	int mult2[10]={11,10,9,8,7,6,5,4,3,2};
	int i;
	char texto[100];
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n\nEntre com o CPF: ");
	fgets(texto, 100, stdin);
	leiacpf(texto, cpf);

	if(	cpf[9] == calculaDigito(cpf, mult1, 9) && 
		cpf[10] == calculaDigito(cpf, mult2, 10))
	{
		printf("\nCPF válido!");
		printf("\nEste CPF é do(s) seguinte(s) estado(s): ");
		imprimeEstado(cpf[8]);
	}
	else
		printf("\nCPF NÃO válido!");	
	
	return 0;
}







