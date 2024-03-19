#include <stdio.h>
#include <math.h>
#define N 1000
int isprime(int);
int main()
{
  int n,i,count=0,x;
  int array[N];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
      x=isprime(array[i]);
      if(x==1) count=count+1;
    }
  printf("%d\n",count);
  return 0;
}

int isprime(int x)
  {
    int i,count=0;
    if(x==2) return 1;
    if(x<=2 || x%2==0) return 0;
      for(i=3;i<=sqrt(x);i++)
      {
       	if(x%i==0)
	  {
	    count=count+1;
	  }
      }
      if(count==0) return 1;
      else return 0;
  }