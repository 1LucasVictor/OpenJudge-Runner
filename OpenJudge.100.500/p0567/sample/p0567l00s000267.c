#include <stdio.h>

int main(){
  int a,b,c;
      
  
  scanf("%d%d%d", &a, &b, &c);
  
  printf("%d", b+c<a ? 0 : c-(a-b));
  return 0;
}