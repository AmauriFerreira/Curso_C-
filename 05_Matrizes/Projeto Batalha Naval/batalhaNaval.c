#include<stdio.h>
#include <time.h>
#include <stdlib.h>

//Globais
int agua = 0;
int navio = 1;
int tironagua = 10;
int tironavio = 11;

void mostrarTabuleiro(int mat[10][10])
{
	int l, c;
	printf("    0 1 2 3 4 5 6 7 8 9\n\n");
	for(l=0; l < 10; l++)
	{
		printf("%d  |", l);
		for(c=0; c < 10; c++)
		{
			if(mat[l][c]==tironagua)
				printf("A|");
			else if (mat[l][c]==tironavio)
				printf("X|");
			else printf(" |");
		}
		printf("\n");
	}
}

void entradaNavios(int mat[10][10])
{
	int l,c, i;
	for(i=1; i<=6; i++) //Sao 6 navios
	{
		printf("Entre com as coordenadas de linha e coluna do %d o. navio:\n", i);
		scanf("%d%d", &l, &c);
		mat[l][c] = navio;   //o navio e formado por 3 partes
		mat[l][c+1] = navio;
		mat[l][c+2] = navio;
	}
}

void sorteioNavios(int mat[10][10])
{
	int i;
	for(i=1; i<=6; i++) //Sao 6 navios
	{
		int l = rand()%10;
		int c = rand()%8;
		mat[l][c] = navio;   //o navio e formado por 3 partes
		mat[l][c+1] = navio;
		mat[l][c+2] = navio;
	}
}

int main()
{
	srand(time(NULL)); //inicializa a semente pseudo-aleatoria
	int tabuleiroHumano[10][10];
	int tabuleiroComputador[10][10];
	int l, c, lh, ch;
	
	for(l=0;l<10;l++)
		for(c=0;c<10;c++)
		{
			tabuleiroHumano[l][c] = 0;
			tabuleiroComputador[l][c] = 0;
		}
	
	int pontosHumano = 0, pontosComputador = 0;

	entradaNavios(tabuleiroHumano);
	sorteioNavios(tabuleiroComputador);

	while(pontosHumano<18 && pontosComputador<18)
	{
		//Tiro do Humano
		printf("Entre com as coordenadas de linha e coluna do tiro:\n");
		scanf("%d%d", &lh, &ch);
		tabuleiroComputador[lh][ch] = tabuleiroComputador[lh][ch] + 10;
		if(tabuleiroComputador[lh][ch] == 11)
		{
			pontosHumano++;
			printf("Acertou!!\n");
		}
		else printf("Agua!!\n");

		//Tiro do Computador
		int lc = rand()%10;
		int cc = rand()%10;
		printf("Eu estou atirando nas coordenadas %d, %d\n", lc, cc);
		tabuleiroHumano[lc][cc] = tabuleiroHumano[lc][cc] + 10;
		if(tabuleiroHumano[lc][cc] == 11)
		{
			pontosComputador++;
			printf("Acertei!!\n");
		}
		else printf("Agua!!\n");

		printf("\nTabuleiro do Humano:\n");
		mostrarTabuleiro(tabuleiroHumano);
		printf("\nTabuleiro do Computador:\n");
		mostrarTabuleiro(tabuleiroComputador);
	}

	if(pontosHumano == 18) printf("Voce ganhou!!!!\n");
	else printf("Eu ganhei, patinho!!!!\n");
}

