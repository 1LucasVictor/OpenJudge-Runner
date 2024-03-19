#include<stdio.h>
int main()
{
    long long int X;
    int a,b,c,t;
    scanf("%lld",&X);
    if(X>500)
	{
		a=X/500;
		X=X%500;
		b=a*1000;
		X=X/5;
		c=X*5;
		t=c+b;
		printf("%d\n",t);
	}
	else
	{
		a=X/5;
		b=a*5;
		printf("%d\n",b);
	}
     return 0;
}
