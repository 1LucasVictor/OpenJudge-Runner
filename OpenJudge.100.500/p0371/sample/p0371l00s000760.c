#include <stdio.h>
#include <math.h>

int main() {
  int i, n, num, min=1000000, max=-1000000;
  long long int sum=0;
  scanf("%d", &n);
  for(i=0; i < n; i++) {
    scanf("%d", &num);
    min = fmin(min, num);
    max = fmax(max, num);
    sum += num;
  }
  printf("%d %d %d\n", min, max, sum);
  return 0;
}
