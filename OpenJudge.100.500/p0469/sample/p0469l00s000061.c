#include <stdio.h>

int main(void){

  int k,a,b;
  scanf("%d %d %d", &k, &a, &b);
  int count_a = (a-1)/k;
  int count_b = b/k;
  if (count_b > count_a) {
    printf("OK\n");
  } else {
    printf("NG\n");
  }

  return 0;
}