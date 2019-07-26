#include <stdio.h>
int main()
{ //inicio
	//matrizes de 3 linhas e 4 colunas
	int mat1[3][4] =
		{{1,2,3,4},
		 {5,6,7,8},
		 {9,8,7,6}};

	int mat2[3][4] =
		{{0,1,0,1},
		 {1,0,1,0},
		 {0,1,0,1}};
	int mat3[3][4];

	int x, y;

	for(x=0; x<3; x=x+1)
	{
	   for(y=0; y<4; y=y+1)
	   {
	      mat3[x][y]=mat1[x][y]+mat2[x][y];	
	   }
	}

	//Mostrando o resultado
	for(x=0; x<3; x=x+1)
	{
	   for(y=0; y<4; y=y+1)
	   {
	      printf("%3d", mat3[x][y]);
	   }
	   printf("\n");
	}

	return 0;
} //fim

