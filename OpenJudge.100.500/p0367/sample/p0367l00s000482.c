#include<stdio.h>
int main()
{
  int i,a,b,c,count=0;
  scanf("%d%d%d",&a,&b,&c);
  for(i=a;i<=b;i++)
    {
      if(c%i==0)
	{
	  count++;
	}
      else{}
    }
  printf("%d\n",count);
  return 0;
}