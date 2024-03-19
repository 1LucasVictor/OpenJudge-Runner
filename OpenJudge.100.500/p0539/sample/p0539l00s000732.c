#include<stdio.h>
int main()
{
  int a,b,c=0,i,j;
  scanf("%d",&a);
  for(i=1;i<=9;i++)
    for(j=1;j<=9;j++)
    {
      if(i*j==a){c=1;break;}
    }
  if(c==1)printf("Yes\n");
  else printf("No\n");
  return 0;
}