#include <stdio.h>

int main()
{
  int i, n;
  int min = 1000000, max = -1000000;
  int x[10000] = {0};
  long long sum = 0;
  
  scanf("%d", &n);
  
  for (i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }
  
  for (i = 0; i < n; i++) {
    sum += x[i];
    if (x[i] < min) {
      min = x[i];
    }
    if (x[i] > max) {
      max = x[i];
    }
  }
  
  printf("%d %d %lld\n", min, max, sum);
  
  return 0;
}