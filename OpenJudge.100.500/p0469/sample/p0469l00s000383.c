#include<stdio.h>
int main()
{
  int k,a,b,i,t=0;
  scanf("%d",&k);
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {
    if(i%k==0)
    {
      t=1;
      printf("OK");
      break;
    }
  }
  if(i-b==1 && t!=1)
  {
    printf("NG");
  }
}