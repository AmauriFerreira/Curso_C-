#include<stdio.h>
int hanoi(int N, char origem, char auxiliar, char destino)
{
	if(N==1){
		printf("\nMova o disco do pino %c para o pino %c",
			origem, destino);
		return 1;
	}
	else{
		int x = hanoi(N-1, origem, destino, auxiliar);
		printf("\nMova o disco do pino %c para o pino %c",
			origem, destino);
		int y = hanoi(N-1, auxiliar, origem, destino);
		return x+1+y;
	}
}

int main()
{
	int total = hanoi(6, 'A', 'B', 'C');
	printf("\n\nGastamos %d movimentos!", total);
	return 0;
}





