#include<stdio.h>
#define N 4

struct carro{
	char fabricante[20];
	char modelo[30];
	int anoFabricacao;
	int anoModelo;
	float capacidade; //p.ex. 1.5, 2.0, ...
	char cor[15];
};

void carroMaisNovo(struct carro vet[], int qtde)
{
	int i;
	int indiceMaisNovo = 0;
	for(i=1; i<qtde; i++)
	{
		if(vet[i].anoModelo > vet[indiceMaisNovo].anoModelo)
		{
			indiceMaisNovo = i;
		}
	}
	
	printf("\n%s, %s, %d", vet[indiceMaisNovo].fabricante,
				vet[indiceMaisNovo].modelo,
				vet[indiceMaisNovo].anoFabricacao);
}

int main()
{
	struct carro vet[N];
	char aux[100];
	int i;
	for(i=0; i<N; i++)
	{
		printf("\nFabricante: "); gets(vet[i].fabricante);
		printf("\nModelo: "); gets(vet[i].modelo);
		printf("\nAno de fabricacao: "); gets(aux);
		vet[i].anoFabricacao = atoi(aux);
		printf("\nAno do modelo: "); gets(aux);
		vet[i].anoModelo = atoi(aux);
		printf("\nCapacidade: "); gets(aux);
		vet[i].capacidade = atof(aux);
		printf("\nCor: "); gets(vet[i].cor);
	}

	for(i=0; i<N; i++)
	{
		if(vet[i].anoModelo >= 2014)
		{
			printf("\n%s, %s, %d", vet[i].fabricante, vet[i].modelo,
				vet[i].anoFabricacao);
		}
	}

	printf("\nMostrando os dados do carro mais novo:\n");
	carroMaisNovo(vet, N);

	return 0;
}
