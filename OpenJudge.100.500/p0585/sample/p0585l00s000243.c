#include<stdio.h>
int main()
{
  int A,B,T,c,d;
  scanf("%d %d %d",&A,&B,&T);
  c=(T+0.5)/A;
  d=c*B;
  printf("%d",d);
  return 0;
}