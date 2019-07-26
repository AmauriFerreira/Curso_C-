#include <stdio.h>
int main()
{ //inicio
	//matriz de 3 linhas e 4 colunas
	int mat[3][4] =
		{{1,2,3,4},
		 {5,6,7,8},
		 {9,8,7,6}};
	int x, y;
	for(x=0; x<3; x=x+1) //linha
	{
	   for(y=0; y<4; y=y+1) //coluna
	   {
	      printf("%3d", mat[x][y]);
	   }
	   printf("\n");
	}

	return 0;
} //fim

