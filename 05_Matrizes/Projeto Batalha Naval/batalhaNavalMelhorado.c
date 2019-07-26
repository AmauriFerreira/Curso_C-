#include<stdio.h>
#include <time.h> //usado para o srand
#include <stdlib.h> //usado para o rand
#include <stdbool.h>

#define agua       0
#define navio      1
#define tironagua  10
#define tironavio  11

//Globais
int lh, ch, //linha e coluna do tiro do humano
	lc, cc; //linha e coluna do tiro do computador
int pontosHumano = 0,  //placar humano
	pontosComputador = 0;  //placar do computador
bool computadorAcertou=false;

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
		
		//Verificando coordenadas fora dos limites
		while(l<0 || l>9 || c<0 || c>7)
		{
			printf("Erro! Coordenada fora do limite!\n");
			printf("Entre com as coordenadas de linha e coluna do %d o. navio:\n", i);
			scanf("%d%d", &l, &c);
		}
		
		//Verificando se ja existe navio ali
		while(mat[l][c] == navio ||
			mat[l][c+1] == navio ||
			mat[l][c+2] == navio)
		{
			printf("Ja existe um navio ali!\n");
			printf("Entre com as coordenadas de linha e coluna do %d o. navio:\n", i);
			scanf("%d%d", &l, &c);
			
			//Verificando coordenadas fora dos limites
			while(l<0 || l>9 || c<0 || c>7)
			{
				printf("Erro! Coordenada fora do limite!\n");
				printf("Entre com as coordenadas de linha e coluna do %d o. navio:\n", i);
				scanf("%d%d", &l, &c);
			}
		}
		
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
		//Verificando se ja existe navio ali
		while(mat[l][c] == navio ||
			mat[l][c+1] == navio ||
			mat[l][c+2] == navio)
		{
			l = rand()%10; //sorteio novamente
			c = rand()%8;
		}
		
		mat[l][c] = navio;   //o navio e formado por 3 partes
		mat[l][c+1] = navio;
		mat[l][c+2] = navio;
	}
}

void tiroHumano(int mat[10][10])
{
	printf("Entre com as coordenadas de linha e coluna do tiro:\n");
	scanf("%d%d", &lh, &ch);
	//Verificando coordenadas fora dos limites
	while(lh<0 || lh>9 || ch<0 || ch>9)
	{
		printf("Erro! Coordenada fora do limite!\n");
		printf("Entre com as coordenadas de linha e coluna do navio:\n");
		scanf("%d%d", &lh, &ch);
	}
	
	//nao quero atirar onde ja atirei
	while(mat[lh][ch] == tironavio ||
		mat[lh][ch] == tironagua) 
	{
		printf("Voce ja atirou aqui!\n");
		printf("Entre com as coordenadas de linha e coluna do tiro:\n");
		scanf("%d%d", &lh, &ch);
	}
	
	mat[lh][ch] = mat[lh][ch] + 10;
		
	if(mat[lh][ch] == tironavio)
	{
		pontosHumano++;
		printf("Acertou!!\n");
	}
	else printf("Agua!!\n");
}


void tiroComputador(int mat[10][10])
{
	if(computadorAcertou) //estrategia "inteligente"
	{
		cc++; //tento atirar a direita
		mat[lc][cc] = mat[lc][cc] + 10;
		if(mat[lc][cc] == tironavio)
		{
			pontosComputador++;
			printf("Acertei!!\n");
			computadorAcertou = true;
		}
		else
		{
			printf("Agua!!\n");
			computadorAcertou = false;
		}
	}
	else // volte a chutar aleatoriamente
	{
		lc = rand()%10;
		cc = rand()%10;
		//nao quero atirar onde ja atirei
		while(mat[lc][cc] == tironavio ||
			mat[lc][cc] == tironagua) 
		{
			lc = rand()%10;
			cc = rand()%10;
		}
		
		printf("Eu estou atirando nas coordenadas %d, %d\n", lc, cc);
		mat[lc][cc] = mat[lc][cc] + 10;
		if(mat[lc][cc] == tironavio)
		{
			pontosComputador++;
			printf("Acertei!!\n");
			computadorAcertou = true;
		}
		else printf("Agua!!\n");
	}	
}

int main()
{
	srand(time(NULL)); //inicializa a semente pseudo-aleatoria
	int tabuleiroHumano[10][10];
	int tabuleiroComputador[10][10];
	int l, c;
	for(l=0;l<10;l++)
		for(c=0;c<10;c++)
		{
			tabuleiroHumano[l][c] = agua;
			tabuleiroComputador[l][c] = agua;
		}
	
	printf("\n\a\a\aJOGO BATALHA NAVAL\n\n");
	entradaNavios(tabuleiroHumano);
	sorteioNavios(tabuleiroComputador);
	printf("\nComece a partida!!\n\n");
	
	while(pontosHumano<18 && pontosComputador<18)
	{
		tiroHumano(tabuleiroComputador);
		tiroComputador(tabuleiroHumano);
		
		printf("\nTabuleiro do Humano:\n");
		mostrarTabuleiro(tabuleiroHumano);
		printf("\nTabuleiro do Computador:\n");
		mostrarTabuleiro(tabuleiroComputador);
	}

	if(pontosHumano == 18) printf("Voce ganhou!!!!\n");
	else printf("Eu ganhei, patinho!!!!\n");
}

