#include <stdio.h>

int main()
{

char texto1[]="abcde";
char texto2[]="fghij";
char texto3[]="abcde";
char texto4[]="fghij";

printf("\n\nVeja o conteudo das Strings originais:\n");
printf("\nTexto1: %s\n", texto1);
printf("\nTexto2: %s\n", texto2);
printf("\nTexto3: %s\n", texto3);
printf("\nTexto4: %s\n", texto4);
printf("\n\nEntre com o seguinte texto (sera lido para texto1): 1234567890\n");

gets(texto1);

printf("\nVeja como ficou o texto1: %s\n", texto1);
printf("\nVeja como ficou o texto2: %s\n", texto2);
printf("\nVeja como ficou o texto3: %s\n", texto3);
printf("\nVeja como ficou o texto4: %s\n", texto4);

printf("\n\nVamos agora digitar algo para texto2 e ver o que acontece. Entre com o seguinte texto (sera lido para texto2): 1234567890\n");

gets(texto2);

printf("\nVeja como ficou o texto1: %s\n", texto1);
printf("\nVeja como ficou o texto2: %s\n", texto2);
printf("\nVeja como ficou o texto3: %s\n", texto3);
printf("\nVeja como ficou o texto4: %s\n", texto4);

printf("\n\nAgora vamos usar o fgets ao inves do gets:\n");
printf("\n\nEntre com o seguinte texto (sera lido para texto3): 1234567890\n");

fgets(texto3, 6, stdin);

printf("\nVeja como ficou o texto3: %s\n", texto3);
printf("\nVeja como ficou o texto4: %s\n", texto4);

return 0;
}
