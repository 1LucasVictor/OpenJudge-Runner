#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a,int b)
{return a > b ? b : a;}

int main()
{
  int l,r;
  int i,j,ans=2020;

  scanf("%d%d",&l,&r);

  for(i=l; i<r; i++)
  {
    for(j=l+1; j<=r; j++)
    {
      ans = min(ans,(i*j)%2019);
      if(ans == 0)
        break;
    }
  }

  printf("%d",ans );

  return 0;
}
