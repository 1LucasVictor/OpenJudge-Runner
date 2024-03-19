#include <stdio.h>
#include<string.h>

int main()
{
  int x;
  long long ans=0;
  scanf("%d",&x);
  
    while(x>=500)
    {
      x-=500;
      ans+=1000;
    }
  
  while(x>=5)
  {
    x-=5;
    ans+=5;
  }
  
  printf("%lld\n",ans);
  
  return 0;
}