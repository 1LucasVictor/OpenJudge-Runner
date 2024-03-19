#include <stdio.h>

int main(void){
  
  int a, b;
  int ans1, ans2;
  int temp;
  int i;
  int j;
  
  while( scanf("%d", &a) != EOF ){
    scanf("%d", &b);
    if( a > b ){
       temp = a;
       a = b;
       b = temp;
    }
    
    j = 0;
    if( !(a%2) && !(b%2) ) j = 1;
    if( a%2 && a%2 ) j = 1;
    
    i = a;
    while( i > 0 ){
      if( !(a % i) ){
        if( !(b % i) ){
           ans1 = i;
           i = 1;
        }
      }
      
      i = i - 1 - j;
    }
    
    ans2 = (b/ans1) * a;
    
    printf("%d %d\n", ans1, ans2);
    
  }
  
    
  return 0;
}