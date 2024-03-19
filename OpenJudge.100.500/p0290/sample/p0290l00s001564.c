#include<stdio.h>
#include<math.h>
int isPrime(int);//judge whether the integer is prime or not
int main(void)
{
  int i,n,x,ans;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&x);
      ans+=isPrime(x);
    }
  printf("%d\n",ans);
  return 0;
}
int isPrime(int x)
{
  int i;
  if(x==2) return 1;//2 is a prime number, so the return number is 1
  if(x%2==0) return 0;//if x is an even number, x is not a prime number. So the return number is 0
  for(i=3;i<=sqrt(x);i+=2)
    {
      if(x%i==0) return 0;//now x is not a prime number
    }
  return 1;//now x is a prime number
}

