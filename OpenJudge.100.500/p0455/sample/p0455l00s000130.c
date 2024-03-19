#include <stdio.h>

int main(void){
  int a;
  scanf("%d", &a);

  int num = a + a*a + a*a*a;

  printf("%d\n", num);

}
