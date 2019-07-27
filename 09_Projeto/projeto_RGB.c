#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pixel
{
	int R, G, B;
};

typedef struct pixel PONTO;

void aumentarBrilho(PONTO ** mat, int linhas, int colunas, int maxValor)
{
	int l, c;

	for(l=0; l<linhas; l++)
	{
		for(c=0; c<colunas; c++)
		{
			mat[l][c].R = (int)(mat[l][c].R * 1.2);
			if(mat[l][c].R > maxValor) mat[l][c].R = maxValor;
			mat[l][c].G = (int)(mat[l][c].G * 1.2);
			if(mat[l][c].G > maxValor) mat[l][c].G = maxValor;
			mat[l][c].B = (int)(mat[l][c].B * 1.2);
			if(mat[l][c].B > maxValor) mat[l][c].B = maxValor;
		}
	}
}

void diminuirBrilho(int** mat, int linhas, int colunas)
{
	int l, c;

	for(l=0; l<linhas; l++)
	{
		for(c=0; c<colunas; c++)
		{
			mat[l][c] = (int)(mat[l][c] * 0.8);
		}
	}
}

void espelhar(int** mat, int linhas, int colunas)
{
	int l, c, c2, aux;

	for(l=0; l<linhas; l++)
	{
		for(c=0, c2=colunas-1; c<c2; c++, c2--)
		{
			aux = mat[l][c];
			mat[l][c] = mat[l][c2];
			mat[l][c2] = aux;
		}
	}
}

void borda(int** mat, int linhas, int colunas, int maxValor)
{
	int l;

	for(l=0; l<20; l++)
	{
		desenhaLinhaBranca(mat, l, 0, colunas-1, maxValor);
	}
	for(l=20; l<linhas-20; l++)
	{
		desenhaLinhaBranca(mat, l, 0, 19, maxValor);
		desenhaLinhaBranca(mat, l, colunas-20, colunas-1, maxValor);
	}
	for(l=linhas-20; l<linhas; l++)
	{
		desenhaLinhaBranca(mat, l, 0, colunas-1, maxValor);
	}
}

void desenhaLinhaBranca(int **mat, int linha, int colunaInicial, int colunaFinal, int maxValor)
{
	if(colunaInicial <= colunaFinal)
	{
		mat[linha][colunaInicial] = maxValor;
		desenhaLinhaBranca(mat, linha, colunaInicial+1, colunaFinal, maxValor);		
	}
}

void borrar(int** mat, int linhas, int colunas, int tamanhoBorrao)
{
	int l, c;

	//  .......
	//  aqui voce vai trabalhar!!
}

PONTO ** lerImagem(char * nomeArquivo, int *pLinhas, int *pColunas, int *pMaxValor)
{	
	FILE *fp;
	fp = fopen(nomeArquivo,"r");
	/* Arquivo ASCII, para leitura */
	if(!fp)
	{
		printf( "\nErro na abertura do arquivo\n\n");
		exit(-1);
	}

	char buffer[1001];

	//leia tipo do arquivo
	fgets (buffer, 1000, fp); //Primeira linha

	if(strstr(buffer, "P2") == NULL) // o tipo de arquivo eh diferente de P2?
	{
		printf( "\nErro no tipo do arquivo\n\n");
		exit(-2);
	}

	//leia comentario
	fgets (buffer, 1000, fp);

	fscanf(fp, "%d%d%d", pColunas, pLinhas, pMaxValor);
	
	//criando a matriz
	int **mat, i;
	mat = malloc(*pLinhas * sizeof(int *));
	for(i=0; i< *pLinhas; i++)
		mat[i] = malloc(*pColunas * sizeof(int));

	int l, c;
	for(l=0; l<*pLinhas; l++)
	{
		for(c=0; c<*pColunas; c++)
		{
			fscanf(fp, "%d", &mat[l][c]);
		}
	}
	fclose(fp);
	return mat;
}

void escreverImagem(char * nomeArquivo, PONTO ** mat, int linhas, int colunas, int maxValor)
{	
	FILE *fp;
	fp = fopen(nomeArquivo,"w");
	/* Arquivo ASCII, para leitura */
	if(!fp)
	{
		printf( "\nErro na abertura do arquivo\n\n");
		exit(-1);
	}

	//escreva tipo do arquivo
	fprintf (fp, "P2\n");
	//escreva comentario
	fprintf (fp, "#Figura modificada...\n");
	//colunas, linhas
	fprintf(fp, "%d %d\n", colunas, linhas);
	//maxValor
	fprintf(fp, "%d\n", maxValor);

	int l, c;
	for(l=0; l<linhas; l++)
	{
		for(c=0; c<colunas; c++)
		{
			fprintf(fp, "%d ", mat[l][c]);
		}
		fprintf(fp, "\n");
	}
	fclose(fp);
}

int main(int argc, char * argv[])
{
	int opcao=0;
	int linhas, colunas, maxValor;
	PONTO ** mat;
	int tamanhoBorrao;
	char nomeArquivoLeitura[100];
	char nomeArquivoEscrita[100];
	
	while(opcao!=9)
	{
		printf("1) Ler a imagem\n");
		printf("2) Gravar a imagem\n");
		printf("3) Aumentar o brilho\n");
		printf("4) Diminuir o brilho\n");
		printf("5) Espelhar a imagem\n");
		printf("6) Borda na imagem\n");
		printf("7) Borrar a imagem\n");
		printf("9) Sair\n");
		printf("\nEntre com a opcao desejada:\n");
		scanf("%d", &opcao); getchar();
		switch(opcao)
		{
			case 1:
				printf("\nEntre com o nome da imagem (sem extensao): ");
				gets(nomeArquivoLeitura);
				strcat (nomeArquivoLeitura, ".pgm");
				mat = lerImagem(nomeArquivoLeitura, &linhas, &colunas, &maxValor);
				break;
			case 2:
				printf("\nEntre com o nome da imagem (sem extensao): ");
				gets(nomeArquivoEscrita);
				strcat (nomeArquivoEscrita, ".pgm");
				escreverImagem(nomeArquivoEscrita, mat, linhas, colunas, maxValor);
				break;
			case 3:
				aumentarBrilho(mat, linhas, colunas, maxValor);
				break;
			case 4:
				diminuirBrilho(mat, linhas, colunas);
				break;
			case 5:
				espelhar(mat, linhas, colunas);
				break;
			case 6:
				borda(mat, linhas, colunas, maxValor);
				break;
			case 7:
				tamanhoBorrao = 8;
				borrar(mat, linhas, colunas, tamanhoBorrao);
				break;
		}
	}

	return 0;
}

