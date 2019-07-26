#include <stdio.h>

int fatorial(int n)
{
   int i, prod = 1;
   for(i=1; i<=n; i++)
   {
      prod = prod * i;
   }
   return prod;
}

int fatRec(int n)
{
   if(n==0) return 1;
   else return n * fatRec(n-1);
}


int main()
{
   int x;
   printf("\nEntre com um numero inteiro: ");  
   scanf("%d", &x);
   printf("\nO fatorial de %d eh %d\n", x, fatorial(x));
   printf("\nO fatorial de %d, calculado recursivamente, eh %d\n", x, fatRec(x));
   return 0;
}
