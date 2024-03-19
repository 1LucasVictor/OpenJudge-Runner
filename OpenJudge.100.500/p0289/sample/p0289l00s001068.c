#include<stdio.h>
int gcd(int,int);
  int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",gcd(a,b));

  return 0;
}
int gcd(a,b)
{
  int r;
  while(b>0)
    {
      r=a%b;
      a=b;
      b=r;
    }
      return a;
}