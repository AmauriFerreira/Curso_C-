#include <stdio.h>
 void mostrar(int L, int C, int mat[L][C])
{
	int x,y;
	for(x=0;x<L;x++)
	{
		for(y=0;y<C;y++)
		{
			printf("%5d",mat[x][y]);
		}
		printf("\n");
	}
}

void multiplicacao(int LA, int CA, int A[LA][CA],
	int LB, int CB, int B[LB][CB], int Resp[LA][CB])
{
	if(CA != LB)
	{
		printf("\nDimensoes incompativeis");
		printf("\nMultiplicacao impossivel!!\n\n");
		return;
	}
	int x, y, k, soma;
	for(x=0; x<LA; x++)
		for(y=0; y<CB; y++)
		{
			soma=0;
			for(k=0; k<CA; k++)
			{
				soma = soma + A[x][k] * B[k][y];
			}
			Resp[x][y] = soma;
		}
}

int main()
{
	int A[2][2]={{1,2},{3,4}};
	int B[2][3]={{1,2,3},{4,5,6}};
// Quero multiplicar A x B e colocar a resposta em C
	int C[2][3];
	multiplicacao(2,2,A, 2,3,B, C);	
//Quero mostrar a matriz resposta
	mostrar(2,3,C);
	return 0;
}
