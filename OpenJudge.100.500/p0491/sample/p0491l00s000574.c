#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
  long long int N,K,t,s;
  scanf("%lld %lld",&N,&K);
  t = N%K;
  s = K-t;
  
  if(t>s)
  {
    printf("%lld\n",s);
    exit(0);
  }
  else
  {
    printf("%lld\n",t);
    exit(0);
  }
  return 0;
}
  