#include <stdio.h>

void recursivo(int x)
{
   printf("%d ", x);
   recursivo(x+1);
}

int main()
{
   recursivo(1);
   return 0;
}
