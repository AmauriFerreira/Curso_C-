#include<stdio.h>
#include<stdlib.h>
int main()
{
	int matriz1[4][5];
	int l,c;
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			matriz1[l][c] = l+c;
			printf("%5d", matriz1[l][c]);
		}
		printf("\n");
	}

	//De outro jeito, usando alocacao dinamica e ponteiros

	int ** matriz2;
	matriz2 = (int **) malloc( 4 * sizeof(int *));
	for(l=0; l<4; l++)
	{
		matriz2[l] = (int *) malloc( 5 * sizeof(int));
	}

	printf("\n\n");
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			matriz2[l][c] = l+c;
			printf("%5d", matriz2[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}
