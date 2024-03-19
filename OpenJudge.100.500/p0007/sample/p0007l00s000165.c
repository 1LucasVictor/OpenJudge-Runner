#include <stdio.h>



int main(void){
  
  int n;
  int numab;
  int numcd;
  int ans;
  int k = 10;
  int sumab, sumcd;
  int i;
  
  int a;
  int c;
  
  while( scanf("%d", &n) != EOF ){
  
  ans = 0;
  if( n <= 36){
    for( i = 0; i < 19; i++ ){
      sumab = i;
      sumcd = n - sumab;
      numab = 0;
      numcd = 0;
      
      if( sumcd >= 0 && sumcd <= 18 ){
      
      
        for( a = 0; a < k; a++ ){
          if( sumab - a < k && sumab - a >= 0) numab++;
        }
     
        for( c = 0; c < k; c++ ){
          if( sumcd - c < k && sumcd - c >= 0) numcd++;
        }
    
        ans += (numab*numcd);
      }
    }
  }
  
  printf("%d\n", ans);
   
  }
  return 0;
}