#include<stdio.h>
#include<math.h>
#define N 1000
int isprime(int);
int main()
{
  int num[N];
  int count=0;
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&num[i]);
      if(isprime(num[i])==1)count++;
    }
  printf("%d\n",count);
  return 0;
}
int isprime(int x)
{
  int i=3;
  if(x==2)return 1;

  if(x<2 || x%2==0)return -1;

  
  while(i<=sqrt(x))
    {
      if(x%i==0) return -1;
      i=i+2;
    }
  return 1;
}