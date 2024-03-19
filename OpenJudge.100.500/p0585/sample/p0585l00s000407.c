#include<stdio.h>
 
int main(void)
{
  int a,b,t,f,d;
  double time;
  scanf("%d%d%d",&a,&b,&t);
  
  time = t + 0.5;
  f = time / a;
  d = f * b;
  printf("%d",d);
  return 0;
}