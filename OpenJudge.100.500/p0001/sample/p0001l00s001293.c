#include<stdio.h>
int main()
{
 long long int a,b,s,d;
 while(scanf("%lld %lld",&a,&b)!=EOF)
  {
      d=0;
      s=a+b;
     while(s!=0)
     {
      s=s/10;
      d++;
     }
     printf("%lld\n",d);
  }
return 0;
}