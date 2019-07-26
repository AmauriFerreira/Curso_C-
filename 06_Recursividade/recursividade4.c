#include <stdio.h>

void recursivo(int x)
{
   if(x<=10)
   {
      printf("%d ", x);
      recursivo(x+1);
   }
}

int main()
{
   recursivo(1);
   return 0;
}
