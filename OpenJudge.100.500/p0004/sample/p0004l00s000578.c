#include <stdio.h>

int main(void){
  
  int a, b;
  int ans1, ans2;
  int temp;
  int i;
  
  while( scanf("%d", &a) != EOF ){
    scanf("%d", &b);
    if( a > b ){
       temp = a;
       a = b;
       b = temp;
    }
    
    for( i = a; i > 1; i-- ){
      if( !(a % i) ){
        if( !(b % i) ){
           ans1 = i;
           i = 1;
        }
      }
    }
    
    ans2 = (b/ans1) * a;
    
    printf("%d %d\n", ans1, ans2);
    
  }
  
    
  return 0;
}