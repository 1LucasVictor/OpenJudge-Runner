#include <stdio.h>

int main(void) {

  long n,d,x,y,count = 0;
  scanf("%ld %ld", &n, &d);
  d = d*d;
  for (long i = 0; i < n; i++) {
    scanf("%ld %ld", &x, &y);
    if (x*x+y*y <= d) {
      count++;
    }
  }
  printf("%ld\n", count);

  return 0;
}