#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,k,judge;
  scanf("%d%d",&n,&k);
  
  if(k==1||n==0){
    printf("0");
    return 0;
  }
  if(k>n){
    printf("%d",n);
    return 0;
  }
  judge=n%k;
  if(abs(judge-k)<=judge)
    printf("%d",abs(judge-k));
  else
    printf("%d",judge);
  return 0;
}