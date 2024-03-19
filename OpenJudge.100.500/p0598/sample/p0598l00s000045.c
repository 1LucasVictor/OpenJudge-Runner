#include<stdio.h>

int main()
{
  int A, B;
  scanf("%d %d", &A, &B);
  int ans = (B % A == 0) ? (A + B) : (B - A);
  printf("%d\n", ans);
  return 0;
}