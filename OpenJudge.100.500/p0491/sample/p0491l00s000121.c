#include<stdio.h>
int main(void)
{
  long int N,K;
  scanf("%ld %ld",&N,&K);
  if(N%K<(K-N%K))
    printf("%ld",N%K);
  else
    printf("%ld",K-N%K);
  return 0;
}