#include <stdio.h>
int main()
{
 long long int a,b,N,M,t;
long long int gcd,lcm;
  while (scanf("%lld %lld",&N,&M)!=EOF)
  {
  a=N;
  b=M;
 while(b!=0){
    t=b;
    b=a%b;
    a=t;
  }
  gcd=a;
  lcm=(N*M)/gcd;
printf("%lld %lld\n",gcd,lcm);
  }
  return 0;
}