#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
  int A, B, C, K;
  scanf("%d %d %d %d", &A, &B, &C, &K);

  int sum = 0;
  
  int A1=A-K;
  if (A1<0)A1=0;
  K-=A;
  if (K<0)K=0;

  int B1=B-K;

  if (B1<0)B1=0;
  K-=B;
  if (K<0)K=0;

  int C1=C-K;

  if (C1<0)C1=0;
  K-=B;
  if (K<0)K=0;

  if (A1 != A)sum+=abs(A1-A);
  if (C1 != C)sum+=abs(C1-C)*-1;

  printf("%d",sum);   

  return 0;
}
