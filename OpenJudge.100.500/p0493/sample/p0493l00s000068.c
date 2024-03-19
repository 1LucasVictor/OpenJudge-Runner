#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
  long long int fee;
  scanf("%lld", &fee);

  long long int result = 0;
  result += (fee / 500) * 1000;
  fee %= 500;
  result += (fee / 5) * 5;

  printf("%lld\n", result);

  return 0;
}
