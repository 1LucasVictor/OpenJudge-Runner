#include <stdio.h>
int main(void)
{
  int A, B;
  scanf("%d %d", &A, &B);
  int n = 0;
  int c = 1;
  while(c < B){
    n++;
    c = c - 1 + A;
  }
  printf("%d\n", n);
  return 0;
}
