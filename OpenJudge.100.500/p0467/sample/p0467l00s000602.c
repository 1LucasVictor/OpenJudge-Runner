#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
 
  int a,b,c,k;
  scanf("%d%d%d%d",&a,&b,&c,&k);
 
  int ans=0;
  
  if(k<=a)
  {
    ans=k;
  }
  else
  {
    ans=a;
    if(b<=k-a)
    {
      if(k-a-b<=c)
      {
        ans-=(k-a-b);
      }
      else
      {
        ans-=c;
      }
    }
  }
  printf("%d\n",ans);
  return 0;
}