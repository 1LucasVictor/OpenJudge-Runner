
#include<stdio.h>

int primef(int a);

int main()
{
  int n,i,prime;
  while(scanf("%d",&n) != EOF)
    {
      prime=0;
      for(i=1;i<=n;i++)
	{if(primef(i)==0)
	    prime++;
	}
      printf("%d\n",prime);
	}
  return 0;
}

int primef(int a)
{
  int i,k;
  k=0;
  for(i=1;i<=a;i++)
    {if(a%i==0)
	k++;
    }
  if(k==2)
    return 0;
  else
    return 1;
}