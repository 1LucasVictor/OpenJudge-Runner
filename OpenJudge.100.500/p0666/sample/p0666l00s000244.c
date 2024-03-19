#include <stdio.h>

int main(void){

  long x,a,b;
  scanf("%ld %ld %ld", &x, &a, &b);
  if (b <= a) {
    printf("delicious\n");
  } else if (b <= a+x) {
    printf("safe\n");
  } else {
    printf("dangerous\n");
  }

  return 0;
}