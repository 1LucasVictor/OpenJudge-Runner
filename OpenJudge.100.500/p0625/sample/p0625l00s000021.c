#include <stdio.h>

int main(void)
{
  int A, B;
  scanf("%d%d", &A, &B);
  printf("%s\n", A < 9 && B < 9 ? "Yay!" : ":(");
}