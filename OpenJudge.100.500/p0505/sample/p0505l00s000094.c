#include <stdio.h>
int main(void)
{
          int p , n , i;
          scanf("%d%d", &p , &n) ;
          int a[n] ;
          for ( i = 0 ; i< n ; i++)
          {
                    scanf("%d", &a[i]) ;
          }
          int sum = 0 ;
          for ( i = 0 ; i < n ; i++)
          {
                    sum = sum + a [i] ;
          }
          if (sum >= p) printf("Yes") ;
          else printf("No") ;
}

