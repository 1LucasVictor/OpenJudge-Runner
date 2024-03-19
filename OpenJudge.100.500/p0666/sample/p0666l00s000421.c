#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	long long x,a,b;
	while(scanf("%lld%lld%lld",&x,&a,&b)!=EOF)
	{
		if(b<=a)
		printf("delicious\n");
		else if(x+a>b)
		printf("safe\n");
		else
		printf("dangerous\n");
	}	
}