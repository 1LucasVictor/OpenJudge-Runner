#include <stdio.h>
//#include <string.h>

int main(void){
  
  int a,b;
  
  scanf("%d %d", &a, &b);
  //scanf("%d %d", &h, &w);
  
  if(b%a==0) printf("%d", a+b);
  else printf("%d", b-a);

  return 0;
}