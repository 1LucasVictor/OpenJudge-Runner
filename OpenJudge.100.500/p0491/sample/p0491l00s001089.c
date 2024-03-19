#include <stdio.h>

int main(void)
{
  int N,K,t,s;
  scanf("%d %d",&N,&K);
  t = N%K;
  s = K-t;
  if(N<K)
  {
    printf("%d\n",N);
    exit(0);
  }
  
  if(t>s)
  {
    printf("%d\n",s);
    exit(0);
  }
  else
  {
    printf("%d\n",t);
    exit(0);
  }
  return 0;
}