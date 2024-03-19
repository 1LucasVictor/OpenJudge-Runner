#include <stdio.h>


int main(void)
{
  int i, j, k;
  int n, x;
  
  
  while( scanf("%d %d", &n, &x), n || x ){
  int cnt = 0;
    for( i = 1; i <= n; i++ ){
      for( j = 1; j < i; j++ ){
        for( k = 1; k < j; k++ ){
          if( i+j+k == x ){
            if( i!=j && j!=k && k!=i ) cnt++;
          }
        }
      }
    }
  
    printf("%d\n", cnt);
  
  }
  
  return 0;

 
}