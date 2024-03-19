#include<stdio.h>

int main()
{
  int a, b, c, k;
  scanf("%d %d %d %d", &a, &b, &c, &k);
  
  // k <= a + b + c
  // k - (a + b) <= c
  int minC = 0;
  if (a + b < k) {
    minC = k - (a + b);
  }
  
  int maxA = a;
  if (a > k) {
    maxA = k;
  }
  
  printf("%d\n", maxA - minC);
  
  return 0;
}