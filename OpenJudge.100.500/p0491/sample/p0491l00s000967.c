#include <stdio.h>
int main(void)
{
  long int N,K;
  scanf("%ld%ld",&N,&K);
  if(N % K < (K - N % K))
    printf("%ld\n", N % K); 
  else
    printf("%ld\n", K - N % K);
  
  return 0;
}
