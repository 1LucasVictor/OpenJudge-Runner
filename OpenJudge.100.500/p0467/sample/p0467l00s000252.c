#include <stdio.h>

int main(void){

  long a,b,c,k;
  scanf("%ld %ld %ld %ld", &a, &b, &c, &k);
  long answer = 0;
  if (k <= a) {
    answer = k;
  } else if (k <= a+b) {
    answer = a;
  } else {
    answer = a;
    answer -= k-(a+b);
  }
  printf("%ld\n", answer);

  return 0;
}