#include<stdio.h>
long long abc(long long a,long long b)
{   long long c;
    c=a-b;
    if(c<0) c=-c;
    return c;
}
int main()
{  long long n,k,n1;
   int f=1;
   scanf("%lld%lld",&n,&k);
   n1=n;
   if(n==0) printf("%lld",k);
   else if(k==1) printf("0");
   else
   while(f)
   {  n=abc(n,k);
      if(n1>n) n1=n;
      else 
	  {  printf("%lld",n1);
	     f=0;
	  }
   }
} 