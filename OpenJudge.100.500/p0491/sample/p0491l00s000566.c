#include <stdio.h>
int main(void)
{
  int N,K;
  scanf("%d%d",&N,&K);
  if(N % K < (K - N % K))
    printf("%d\n", N % K); 
  else
    printf("%d\n", K - N % K);
  
  return 0;
}