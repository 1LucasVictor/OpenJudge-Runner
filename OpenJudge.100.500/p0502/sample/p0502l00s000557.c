#include <stdio.h>
int main()
{
  int N,i;
  scanf("%d\n",&N);
  int A[N];
  i = 0;
  while (i < N)
  {
    scanf("%d ",&A[i]);
    if (A[i] % 2 == 0)
    {
      if (!(A[i] % 3 == 0 || A[i] % 5 == 0))
      {
        printf("DENIED");
        return (0);
      }
    }
    i++;
  }
  printf("APPROVED");
}