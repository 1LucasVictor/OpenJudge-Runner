#include<stdio.h>

int main()
{
  int a, b, c, k;
  scanf("%d %d %d %d", &a, &b, &c, &k);
  
  if (a > k) {
    printf("%d\n", a);
    return 0;
  }
  
  // k <= a + b + c
  // k - (a + b) <= c
  int minC = 0;
  if (a + b < k) {
    minC = k - (a + b);
  }
  
  printf("%d\n", a - minC);
  
  return 0;
}