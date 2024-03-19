#include<stdio.h>
int main()
{
    long long int a,x;
	double  b;
    scanf ("%lld",&a);
    scanf("%lf",&b);
	x=b*100+0.00001;
    printf("%lld",a*x/100);
    return 0;
}
