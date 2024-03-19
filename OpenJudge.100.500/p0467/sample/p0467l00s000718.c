#include <stdio.h>


int main()
{
  long A,B,C,K;
  
  scanf("%lu %lu %lu %lu",&A,&B,&C,&K);
  
  long ans;
  
  if(A>K)
    printf("%lu",A);
  else if(K-A-B <= 0)
    printf("%lu",A);
  else
  {
    ans=2*A+B-K;
    printf("%lu",ans);
  }
 }