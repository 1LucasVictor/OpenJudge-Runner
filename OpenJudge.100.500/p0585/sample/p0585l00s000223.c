#include<stdio.h>
int main ()
{
  int time=0;
  int biscuit=0;
  int timelimit=0;
  int b_cnt=0;
  int i=0;
  scanf("%d%d%d",&time,&biscuit,&timelimit);
  for(i;i*(time+0.5)<timelimit;i++)
  {
    b_cnt+=biscuit;
  }
  printf("%d",b_cnt);
  return 0;
}