#include<stdio.h>
 
int main()
{
    long long int a,b;
    long double c;
 
    scanf("%lld %lld",&a,&b);
 
    c=(a+b)/2.0;
    a=(a+b)/2;
 
    if(c-a == 0.00) 
    	printf("%.0Lf\n",c);
    else 
    	printf("IMPOSSIBLE\n");
}