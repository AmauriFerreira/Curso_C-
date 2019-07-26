#include <stdio.h>

int main()
{ //inicio      
	int cont, tabuada;
	
	printf("Qual tabuada voce quer que eu mostre? ");
	scanf("%d", &tabuada);
	// para cont de 1 ate 10 passo 1
	for (cont=1; cont<=10; cont=cont+1)
	{
	   printf("%2d x %2d = %3d\n", tabuada, cont, cont*tabuada);
	}

	return 0;
} //fim

