#include<stdio.h>
//#include<string.h>
//typedef long long ll;
int main(void)
{
  int x=0,ans=0,tmp=0,tmp2=0;
  scanf("%d",&x);
  tmp=x/500;
  tmp2=x%500;
  ans=tmp*1000+(tmp2/5)*5;
  printf("%d\n",ans);
  return 0;
}