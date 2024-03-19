#include<stdio.h>
int main()
{
  int a=0,n,m,i;
  scanf("%d",&n);
  while(n--)
    {
      scanf("%d",&m);
      for(i=2;i*i<=m;i++)
	{
	  if(m%i==0)
	    break;
	}
      if(i*i>m)
	a++;
    }
  printf("%d\n",a);
  return 0;
}

