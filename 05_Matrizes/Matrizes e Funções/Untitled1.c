 #include<stdio.h>
int maiorSoma(int L, int C, int mat[L][C], int maior)
{
	int y,x,soma;
	maior = 0;
	
	for(x=0; x<L; x++)
	{
		soma=0;
		for(y=0; y<C; y++)
		{
			soma = soma + mat[x][y];	
		}
		if(soma > maior)
		{
			maior = soma;
		}
	}
	for(y=0; y<C; y++)
	{
		soma=0;
		for(x=0; x<L; x++)
		{
			soma = soma + mat[x][y];	
		}
		if(soma > maior)
		{
			maior = soma;
		}
	}
	
}

int main()

{
	int mat[3][4]={{2,3,7,12}, {15,3,6,2}, {4,9,8,13}};
	int *p;
	maiorSoma(3,4,mat,*p);
	printf("\nA maior soma de linhas e colunas eh %d",p );
	return 0;
}

