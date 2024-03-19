#include <stdio.h>
#include <math.h>

int main(void)
{
  int i, j, n;
  
  scanf("%d", &n);
  
  i = ( n / 10 ) % 10;
  
  j = n / 100;
  
  if( n % 10 == 7 ){
    printf("Yes\n");
    return 0;
  }
  if( i == 7 ){
    printf("Yes\n");
    return 0;
  }
  if( j == 7 ){
    printf("Yes\n");
    return 0;
  }
  
  printf("No\n");
  return 0;
}