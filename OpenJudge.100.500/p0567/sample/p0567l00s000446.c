#include <stdio.h>
#include <stdint.h>

int main(void){
  int a,b,c;
  scanf("%d %d %d", &a, &b,&c);
  int d = c-(a-b);
  printf("%d\n", d > 0? d: 0);
  return 0;
}

