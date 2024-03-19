#include <stdio.h>
int main()
{
  int n,p=0;
  scanf("%d",&n);
  for(int i=1;i<=9;i++)
  {
    for(int j=i;j<=9;j++)
    {
    	if(n==(i*j))
      {
          printf("Yes\n");
          p=1;
          break;
      }
    }
    if(p==1){break;}
  }
  if(p==0)
  {
    printf("No\n");
  }
  return 0;
}