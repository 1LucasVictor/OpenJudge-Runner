#include <stdio.h>
int main(void)
{
          int n ;
          int score = 0 ;
          scanf("%d", &n) ;
          int a[n] ;
          int i ;
          for ( i = 0 ; i < n ; i++)
          {
                    scanf("%d", &a[i]) ;
          }
          int x = a[0] ;
          for ( i = 1 ; i < n ; i++)
          {
                    if(x == a[i]) {
                              score = 0 ;
                    }
          }
          if(score == 0 ) printf("YES") ;
          else printf("NO") ;

}
