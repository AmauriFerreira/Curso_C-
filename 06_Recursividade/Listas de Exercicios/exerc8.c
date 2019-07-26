/*Exercício 8 - Crie uma função recursiva que procure um
  elemento num vetor, a partir de um dado índice. Caso ache,
  a função retorna o índice do tal elemento; em caso de falha,
  retorna -1. A assinatura da função é:
  int procurar (int vet[], int procurado, int inicio, int tam)
*/
#include<stdio.h>
int procurar (int vet[], int procurado, int inicio, int tam)
{
	if(inicio >= tam) return -1;
	else if(procurado == vet[inicio]) return inicio;
	else return procurar(vet, procurado, inicio+1, tam);
}
int main()
{
	int x[]={5,3,9,1,4,7,12,2,0,8}, proc, resp;
	printf("\nEntre com um numero para ser procurado:");
	scanf("%d", &proc);
	resp = procurar(x, proc, 0, 10);
	if(resp == -1) printf("\nEsse valor nao existe no vetor");
	else printf("\nEsse valor existe no indice %d", resp);
	return 0;
}
