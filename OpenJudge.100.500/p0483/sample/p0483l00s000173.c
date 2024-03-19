#include <stdio.h>
int main(void)
{
          int n , rem ;
          scanf("%d", &n) ;
          while(n != 0 )
          {
                    rem = n % 10 ;
                    if( rem == 7)
                    {
                              printf("Yes") ;
                              return 0 ;
                    }
                    n = n / 10 ;
          }
          printf("No") ;
}
