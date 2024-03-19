#include<stdio.h>
int main()
{
  int n,a,b,ans;
  scanf("%d%d%d",&n,&a,&b);
  ans=n*a;
  if(ans>b)
  {
    printf("%d\n",b);
  }
  else
  {
    printf("%d\n",ans);
  }
  return 0;
}