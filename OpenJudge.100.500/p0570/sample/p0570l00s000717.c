#include <stdio.h>

int main()
{
  long int A, B;
  scanf("%ld %ld", &A, &B);

  if (0 == (A+B)%2) {
    printf("%ld\n", (A+B)/2);
  } else {
    printf("IMPOSSIBLE\n");
  }

  return 0;
}
