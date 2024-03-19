#include<stdio.h>
int main()
{
  int n,x;
  int i,j,r;
  while(1)
    {
      scanf("%d%d",&n,&x);
      if((n==0)&&(x==0)) break;
      r=0;
      for(i=1;i<=n;i++)
	{
	  for(j=i+1;j<=n;j++)
	    {
	      if((x-(i+j)<=n)&&(x-(i+j)>j)) r++;
	    }
	}
      printf("%d\n",r);
    }
  return 0;
}