#include <stdio.h>

int main(void){

  long h,a;
  scanf("%ld %ld", &h, &a);
  long answer = h/a;
  if (h%a != 0) {
    answer++;
  }

  printf("%ld\n", answer);

  return 0;
}