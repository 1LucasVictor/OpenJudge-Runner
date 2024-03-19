#include <stdio.h>
int main (void){
  
  int a,sum;
  
  scanf("%d",&a);
  if(a<1||a>10){
    return 1;
  }
    
  sum = a + a*a + a*a*a;

  printf("%d",sum);
  
  return 0;
  
}