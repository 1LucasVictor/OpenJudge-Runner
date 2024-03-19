#include <stdio.h>

int main(void){
  int a;
  scanf("%d", &a);
  
  if(a >= 100 && a <= 999)
    puts("Yes");
  else
    puts("No");
  
  return 0;
}
    
