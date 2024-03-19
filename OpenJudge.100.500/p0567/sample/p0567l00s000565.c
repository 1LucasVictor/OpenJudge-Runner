#include <stdio.h>
#include <stdint.h>

int main(void){
  int a,b,c;
  scanf("%d %d %d", &a, &b,&c);

  printf("%d\n", c-(a-b));
}
