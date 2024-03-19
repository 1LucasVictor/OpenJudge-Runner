#include <stdio.h>

void main(void){
  int x;
  scanf("%d", &x);

  printf("%d\n", (x/500)*1000+((x%500)/5)*5);

}
