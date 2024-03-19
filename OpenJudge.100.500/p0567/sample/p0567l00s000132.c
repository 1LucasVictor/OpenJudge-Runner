#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int a,b,c,diff,ans;
  scanf("%d%d%d",&a,&b,&c);
  ans=b+c;
  if(a>ans)
  {
    diff=0;
  }
  else
  {
  diff=abs(a-(b+c));
  }
  printf("%d",diff);
  return 0;
}