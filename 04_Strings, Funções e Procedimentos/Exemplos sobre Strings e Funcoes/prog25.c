#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int soma(int, int); //prototipo da funcao
int leiaNumero(char[], char[]); //prototipo da funcao

int main()
{
	int x, y, z;
	x = leiaNumero("Entre com o primeiro numero inteiro: ", "Erro");
	y = leiaNumero("Entre com o segundo numero inteiro: ", "Erro");
	printf("\nAinda estou na funcao main.\n");
	z = soma(x,y);
	printf("\nVoltei para a funcao main.\n");
	printf("\nA soma dos numeros vale %d\n", z);
	return 0;
}

int soma(int a, int b)
{
	printf("\nAcabei de entrar na funcao soma.\n");
	return a + b;
}

int leiaNumero(char* mensagem, char* erro)
{
	char entrada[10];
	int i;
	bool houveErro;
		
	do{
		printf("%s\n", mensagem);
		fgets(entrada, 10, stdin);
		houveErro=false;
		
		for(i=0; i<strlen(entrada)-1; i++)
		{
			if(entrada[i]<'0' || entrada[i]>'9')
			{
				printf("%s\n", erro);
				houveErro=true;
				break;
			}
		}
		
	}while(houveErro);
	
	return atoi(entrada);
}












