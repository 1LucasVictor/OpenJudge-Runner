#include<stdio.h>
int main ()
{
  int time=0;
  int biscuit=0;
  int t_limit=0;
  int i=0;
  int b_cnt=0;
  scanf("%d%d%d",&time,&biscuit,&t_limit);
  for(i=1;i*time<t_limit+0.5;i++)
  {
    b_cnt+=biscuit;
  }
  printf("%d",b_cnt);
  return 0;
}