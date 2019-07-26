#include <stdio.h>
#include <stdbool.h>

bool identidade(int L, int C, int mat[L][C])
{
	
	int x, y;
	if(L != C) return false;
	for(x=0; x<L; x++)
	{
		for(y=0; y<C; y++)
		{
			if(x==y && mat[x][y]!=1) return false;
			if(x!=y && mat[x][y]!=0) return false;
		}
	}
	return true;
}

int main()
{
	int m1[2][4], m2[3][3]={{1,0,0}, {0,1,0}, {0,0,1}}, 
		m3[2][2]={{1,2}, {3,4}};
	
	if(identidade(2,4,m1)) printf("\nA matriz m1 eh identidade");
	else printf("\nA matriz m1 NAO eh identidade");
	if(identidade(3,3,m2)) printf("\nA matriz m2 eh identidade");
	else printf("\nA matriz m2 NAO eh identidade");
	if(identidade(2,2,m3)) printf("\nA matriz m3 eh identidade");
	else printf("\nA matriz m3 NAO eh identidade");
	
	return 0;
}
