#include<stdio.h>
int main(void)
{
  int x,n,a,b,count=0;
  for( ; ; )
    {
  scanf("%d%d",&n,&x);
  if(n==0 && x==0){break;}
  for(a=1;a<=(x/3)+1 && a<=n;a++)
    {
      for(b=a+1;(x-a-b)>b && b<=n;b++)
	{	if((x-a-b)<=n){count++;}}
    }
  printf("%d\n",count);
    }
  return 0;
}