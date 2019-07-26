#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Erro comum: isso nao deveria ser feito!!

	int *p;
	
	p = (int *) 1000;
	*p = 2;
	return 0;
}
