/* 
Lista basica sobre vetores e strings:
5) Crie um programa em C que faca o mesmo que a funcao strlen, ou seja,
conte quantos caracteres ha numa String (dica: basta contar ate chegar
o caractere terminador -> '\0').
*/
#include <Stdio.h>
int main()
{
	char texto[100];
	int i, tam=0;
	
	printf("\nEntre com um texto:");
	gets(texto);
	
	for(i=0; i<100; i++)
	{
		if(texto[i] != '\0') tam++;
		else break; //break encerra o loop
	}
	
	printf("\nO texto tem %d caracteres", tam);
	return 0;
}
