#include <stdio.h>

int main()
{ //inicio      
	int cont = 1, tabuada;
	
	printf("Qual tabuada voce quer que eu mostre? ");
	scanf("%d", &tabuada);

	while (cont <= 10)
	{	// 5 x 1 = 5
		// 5 x 2 = 10 ...
		printf("%2d x %2d = %3d\n", tabuada, cont, cont*tabuada);
		cont = cont + 1;
	}

	return 0;
} //fim

