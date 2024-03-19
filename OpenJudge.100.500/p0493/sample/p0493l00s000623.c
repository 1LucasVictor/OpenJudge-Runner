#import<stdio.h>
int main()
{
	long long n,h=0;
	scanf("%lld",&n);

       int a;
       a=n/500;
       h=a*1000;
       n=n%500;
       a=n/5;
       h=h+a*5;
       printf("%lld",h);
       
       }

