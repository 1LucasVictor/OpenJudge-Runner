#include <stdio.h>

int isprime(int);

int main()
{
  int n,x,i,cnt;

  scanf("%d",&n);
  cnt = 0;
  for(i=0;i<n;i++)
    {
      scanf("%d",&x);
      if((isprime(x))==1) cnt++;
    }
  printf("%d\n",cnt);
  return 0;
}

int isprime(int x)
{
  int i=3;
  if(x==2) return 1;
  if(x<2 || x%2==0) return -1;
  while(i*i<=x)
    {
      if(x%i==0) return -1;
      i+=2;
    }
  return 1;
}
      

