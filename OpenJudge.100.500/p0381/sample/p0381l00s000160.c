#include <stdio.h>

int main()
{
 int n, x, i, j, k, a = 0;

 while(1)
 {
     scanf("%d %d\n", &n, &x);
     if(n == 0 || x == 0)
     {
         break;
     }
     for(i = 1; i <= n - 2; i++)
     {
         for(j = i + 1; j <= n - 1; j++)
         {
             for(k = j + 1; k <= n; k++)
             {
                 if((i + j + k) == x)
                 {
                     a += 1;
                 }
             }
         }
     }
     printf("%d\n", a);
     a = 0;
 }

 return 0;
}