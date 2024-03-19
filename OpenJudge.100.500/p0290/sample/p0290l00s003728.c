#include <stdio.h>

int IsPrime(int x)
{
    if (x == 2)
       return 1;
    if (x < 2 || x % 2 == 0)
       return 0;
    int i = 3;
    while(i <= sqrt(x)) {
        if(x % i == 0)
           return 0;
        i += 2;
    }

    return 1;
}

int main(void)
{
   int i, n;
   int p;
   int count = 0;
   
   scanf("%d", &n);
   
   for(i=0; i<n; i++) {
       scanf("%d\n", &p);
       if(IsPrime(p)) {
           count++;
       }
   }
   printf("%d", count);
   return 0;
}
