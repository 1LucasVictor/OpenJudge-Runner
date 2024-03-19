#include <stdio.h>

int main(int argc, char const *argv[])
{
  int A, B, K;
  scanf("%d", &K);
  scanf("%d %d", &A, &B);

  if (A % K == 0 || B % K == 0 || A / K != B / K)
  {
    printf("OK");
  }
  else
  {
    printf("NG");
  }

  return 0;
}