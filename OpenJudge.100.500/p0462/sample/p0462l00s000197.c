#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

void debug(char * string, long long int target) {
  printf("%s", string);
  printf("%lld", target);
  printf("%c", '\n');
}

int main() {
  long long A;
  double B;
  scanf("%lld%lf", &A, &B);

  printf("%lld\n", (long long int)(double)(A * B));
  return 0;
}
