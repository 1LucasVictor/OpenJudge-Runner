#include<stdio.h>

int main(void)
{
  int N,K;
  double t,s;
  
  scanf("%d", &N); scanf("%d", &K);
  
  t=N%K;
  s=K-t;
  
  if(t>s)
    printf("%d",s);
  else if(s>t)
    printf("%d",t);
  else printf("%d",t);
  
  return 0;
}

  
  