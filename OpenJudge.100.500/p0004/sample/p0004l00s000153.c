#include<stdio.h>
long long int gcd(long long int a,long long int b){

     if(b==0)
     return a;
     else
     return  gcd(b,a%b);
	}
	int main()
	{
		long long int a,b;
		while(scanf("%lld %lld",&a,&b)!=EOF){	
		printf("%lld %lld\n",gcd(a,b),a/gcd(a,b)*b);	
		}
    return 0;	
	}