#include<stdio.h>
int main()
{
   char string1[10], string2[10];
   printf("Entre com o nome completo\n");
   gets(string1);
   printf("Entre parte do nome\n");
   gets(string2);
   if(strstr(string1, string2) != NULL)
      printf("A string %s eh parte da string %s\n", string2, string1);
   else printf("A segunda string nao eh parte da primeira\n");
   return 0;
}
