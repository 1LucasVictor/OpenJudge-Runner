#include <stdio.h>

int main(void)
{
  int a,b;
  a = b = 0;
  
  scanf("%d %d", &a, &b);
  
  if((b % a) == 0){
    printf("%d", b + a);
  }
  else{
    printf("%d", b - a);
  }
  return (0);
}
    
    
    