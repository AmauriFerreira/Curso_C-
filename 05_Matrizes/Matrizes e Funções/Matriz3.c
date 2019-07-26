#include <stdio.h>

void somaMatriz(int L, int C, int m1[L][C], int m2[L][C],
	int resp[L][C])
{
	int x,y;	
	for(x=0; x<L; x++)
	{
		for(y=0; y<C; y++)
		{
			resp[x][y] = m1[x][y] + m2[x][y];
		}
	}
}

void mostrarMatriz(int L, int C, int mat[L][C])
{
	int x, y;
	for(x=0; x<L; x++)
	{
		for(y=0; y<C; y++)
		{
			printf("%d%d%d%d", mat[x][y]);
		}
		printf("\n");
	}
}

int main()
{
	int m1[2][2]={{1,2},{3,4}}, m2[2][2]={{1,0},{1,0}},
		resp[2][2];
	
	somaMatriz(2,2,m1,m2,resp);
	mostrarMatriz(2,2,resp);
	
	return 0;
}






