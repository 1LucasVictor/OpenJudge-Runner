#include <stdio.h>

#define rep(i, n) for(int i=0; i<(n); ++i)
#define max  100001

void debug(char * string, long int target) {
  printf("%s", string);
  printf("%ld", target);
  printf("%c", '\n');
}

int main() {
  long A;
  double B;

  scanf("%ld%lf", &A, &B);

  long ans = (double)A * B;

  printf("%ld", ans);

  return 0;
}
