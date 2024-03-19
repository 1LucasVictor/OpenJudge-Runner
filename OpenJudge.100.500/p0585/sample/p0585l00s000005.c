#include<stdio.h>

int main(void)
{
  int a,b,t,i,sum = 0;
  scanf("%d%d%d",&a,&b,&t);

  for(i = 1; a*i < t+0.5; i++) sum += b;
  printf("%d",sum);
  
  return 0;
}