#include <stdio.h>
int main(void)
{
          int i , j , size, x , y = 0 ;
          scanf("%d", &size) ;
          int a[size] ;
          int freq[size] ;

          for ( i = 0 ; i < size ; i++)
          {
                    scanf("%d", &a[i]) ;
          }
          for ( i = 0 ; i < size ; i++)
          {
                    x = 1 ;
                    for ( j = i+1 ; j < size; j++)
                    {

                              if(a[i] == a [j])
                              {
                                        x++ ;
                                        freq[j] = -1 ;
                              }
                    }
                    if(freq[i] != -1)
                    {
                              freq[i] = x ;
                    }
          }
          for(i = 0 ; i < size ; i++)
          {
                    if(freq[i] != -1)
                    {
                             y++ ;
                    }
          }
          if (y==size) printf("YES") ;
          else printf("NO") ;

}
