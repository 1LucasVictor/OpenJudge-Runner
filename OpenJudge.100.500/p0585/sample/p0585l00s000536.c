#include <stdio.h>

int main(void){
  int A, B, T;
  scanf("%d%d%d", &A, &B, &T);

  int times = T/A; //times回生産する

  printf("%d\n", B*times);


  return 0;
}
