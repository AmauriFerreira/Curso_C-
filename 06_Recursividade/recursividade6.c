#include <stdio.h>

int fib(int n)
{
   int a=1, b=1, c, i;
   if(n==1 || n==2) return 1;
   for(i=3; i<=n; i++)
   {
      c = a + b;
      a = b;
      b = c;
   }
   return c;
}

int fibRec(int n)
{
   if(n==1 || n==2) return 1;
   else return fibRec(n-1) + fibRec(n-2);
}


int main()
{
   int x;
   printf("\nEntre com um numero inteiro: ");  
   scanf("%d", &x);
   printf("\nO elemento da sequencia de Fibonacci de ordem %d eh %d\n", x, fib(x));
   printf("\nO elemento da sequencia de Fibonacci de ordem %d, calculado recursivamente, eh %d\n", x, fibRec(x));
   return 0;
}
