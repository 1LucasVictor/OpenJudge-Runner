#include <stdio.h>
#include <stdlib.h>

int main(void)
{int N, K;
 scanf("%d%d", &N, &K);
 if (K>=N){
  if (N<=(K-N))
   printf("%d", N);
  else
   printf("%d", K-N);
  }
 else{
  int A=N/K;
  int B=abs(A*K-N);
  int C=abs((A+1)*K-N);
   if (C<=B)
    printf("%d", C);
   else
    printf("%d", B);
  }
    return 0;
}