#include <stdio.h>
 
int main(void){
  int s, i=0;
  
  scanf("%d", &s);
  i=(s%2)+((s/10)%2)+((s/100)%2);
  printf("%d\n", i);
  
  return 0;
}