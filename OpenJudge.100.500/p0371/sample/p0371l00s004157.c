#include<stdio.h>

int main(void)
{
  int i, n, max = -1000000, min = 1000000;
  long sum = 0;

  scanf("%d", &n);

  int a;

  for(i = 0; i < n; i++) {
    scanf("%d", &a);
    sum += a;
    if(max <= a) {
      max = a;
    }
    if(min >= a) {
      min = a;
    }
  }

  printf("%d %d %ld\n", min, max, sum);

  return 0;
}