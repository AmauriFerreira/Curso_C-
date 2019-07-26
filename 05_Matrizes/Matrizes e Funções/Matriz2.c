#include <stdio.h>
#include <stdbool.h>

void procurarVersaoA(int L, int C, int mat[L][C], int procurado)
{
	int x, y;
	for(x=0; x<L; x++)
	{
		for(y=0; y<C; y++)
		{
			if(procurado == mat[x][y])
			{
				printf("\nO elemento %d existe na linha %d, coluna %d",
					procurado, x, y);
				return; //encerrar o procedimento
			}
		}
	}
	printf("\nO elemento %d nao existe!", procurado);
}

void procurarVersaoB(int L, int C, int mat[L][C], int procurado)
{
	int x, y;
	int achei = 0;  // 0 significa que ainda nao achou nada 
	for(x=0; x<L; x++)
	{
		for(y=0; y<C; y++)
		{
			if(procurado == mat[x][y])
			{
				printf("\nO elemento %d existe na linha %d, coluna %d",
					procurado, x, y);
				achei = 1; // 1 significa achou algo
			}
		}
	}
	if (achei==0) printf("\nO elemento %d nao existe!", procurado);
}

int main()
{
	int m[3][3]={{1,2,3}, {4,5,6}, {6,6,6}};
	
	procurarVersaoA(3,3,m,6);
	procurarVersaoA(3,3,m,14);
	procurarVersaoB(3,3,m,6);
	procurarVersaoB(3,3,m,14);
	return 0;
}






