#include<stdio.h>
#include<math.h>
//static const int N =10000,X=10*10*10*10*10*10*10*10;
int main()
{
  int n, x,count=0,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&x);
      if(1==isPrime(x))count+=1; 
    }	 
 
  printf("%d\n",count);

  return 0;
}

int isPrime(int x)
{
  int i;
  if (x == 2) return 1;

  if( x < 2 || x%2==0)return 2;
  i = 3;
  while (i*i <= x )
    {
      if (x%i==0)return 2;
      i = i + 2;
    }
  return 1;
}