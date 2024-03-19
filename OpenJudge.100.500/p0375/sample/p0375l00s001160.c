#include <stdio.h>


int main(void)
{
  
  int n;
  int i;
  int x;
  int a;
  
  scanf("%d", &n);
  
  for( i = 1; i <= n; i++ ){
    
    x = i;
    a = 1;
    while( x > 10 ){
      
      x /= 10;
      if( x % 10 == 3 && a){ 
        printf(" %d", i);
        a = 0;
      }
    }
    
    
    if( i % 3 ){
      if( i % 10 == 3 && a ) printf(" %d", i);
    }
    else{
      if( a ) printf(" %d", i);
    }
    
    
  }
  
  puts("");  
  
  return 0;    
 
}       
        