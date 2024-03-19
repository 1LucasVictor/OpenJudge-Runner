#include <stdio.h>

int main()
{
  int A;
  int B;
  
  scanf("%d%d", &A, &B);

  int count = 1;
  int next = A;

  while (next < B)
  {
    next += (A-1);
    count++;
  }
  
  printf("%d\n", count);
  return 0;
}