#include<stdio.h>
#include<math.h>
#define N 1000
#define TRUE 1
#define FALSE 0
int isprime(int);
int main()
{
  int num[N];
  int count=0;
  int i,j,n,r;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&num[i]);
      if(isprime(num[i])==TRUE)count++;
    }
  printf("%d\n",count);
  return 0;
}

int isprime(int x)
{
  if(x==2)return TRUE;

  if(x<2 || x%2==0)return FALSE;

  int i=3;
  while(i<=sqrt(x))
    {
      if(x%i==0) return FALSE;
      i=i+2;
    }
  return TRUE;
}
	   