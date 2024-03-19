#include <stdio.h>
int main(void)
{
          int n ;
          scanf("%d", &n) ;
          int fh;
          int f ;
          fh = (n/500) * 1000 ;
          n = n%500 ;
          f = (n/5)*5 ;
          int sum = fh + f ;
          printf("%d",sum) ;
}
