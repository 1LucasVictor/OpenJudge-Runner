#include<stdio.h>

#define Num 1000000

int main(void)
{
  int a[Num];
  int n,i,j,count=0;
  
for(i=0;i<Num;i++)
	{
	  a[i]=1;
	}

  while(scanf("%d",&n)!=EOF)
    {
      
      
      for(i=2;i<=n;i++)
	{	  
	  for(j=2*i;j<=n;j++)
	    {
	      if(j%i==0)a[j]=0;
	    }
	}

      for(i=2;i<=n;i++)
	{
	  if(a[i]==1)count++;
	}
      
      printf("%d\n",count);
      count=0;
    }
  return 0;
}