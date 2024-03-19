#include <stdio.h>
int main()
{
  int N = 0;
  scanf("%d",&N);
  if (N % 2 == 0 && ( N >= 1 && N <= 100))
    printf("%d",N / 2);
  else if (N % 2 == 1 && ( N >= 1 && N <= 100))
    printf("%d",N / 2 + 1);
}