#include <stdio.h>
#include <string.h>

int main()
{
int i, j=0, k;
char texto[100];
int cpf[11];

printf("\n\nEntre com o CPF: ");
gets(texto);

for(i=0; i<strlen(texto) && j<11; i++)
{
   if(texto[i]>='0' && texto[i]<='9') //teste para saber se eh digito
   {
      cpf[j] = texto[i] - '0'; //convertendo para inteiro
      j++;
   }
}

if(j<11)
{
   k = 10;
   for(i=j-1; i>=0; i--)
   {
      cpf[k] = cpf[i];
      k--;
   }
   for( ;k>=0; k--)
   {
      cpf[k] = 0;
   }
}

printf("\n\nSomente os digitos do CPF: ");
for(i=0; i<11; i++)
{
   printf("%d ", cpf[i]);
}

return 0;
}
