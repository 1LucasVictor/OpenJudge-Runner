#include <stdio.h>

int main()
{
          int a , b , h , k;
          scanf("%d%d", &a, &b) ;
          if( (a+b) % 2 != 0 ) printf("IMPOSSIBLE\n") ;
          else
          {
                    h = (a+b)/ 2 ;

                    printf("%d\n", h) ;
          }

}