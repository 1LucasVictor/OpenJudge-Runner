#include<stdio.h>

int main()
{
  int d,n;
  int ans;
  scanf("%d %d",&d,&n);
  if(d==0)
    {
      ans=n;
    }
  if(d==1)
    {
      ans=n*100;
    }
  if(d==2)
    {
      ans=n*10000;
    }
  printf("%d\n",ans);
  return 0;
}
   
