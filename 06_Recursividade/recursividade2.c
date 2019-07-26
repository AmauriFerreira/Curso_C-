#include<stdio.h>
	int lh, ch;
	
	void entradaValidada()
	{
		printf("Entre com as coordenadas de linha e coluna do tiro:\n");
		scanf("%d%d", &lh, &ch);
		if (!(lh<0 || lh>9 || ch<0 || ch>9)) return;
		else
		{
			printf("Erro! Coordenada fora do limite!\n");
			entradaValidada();
		}
	}
	
	int main()
	{
		entradaValidada();
		printf("\n\nLidos %d e %d", lh, ch);
		return 0;
	}
