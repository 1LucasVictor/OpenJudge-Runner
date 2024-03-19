#include<stdio.h>
int main()
{
	long long x,a,b;

	while(scanf("%lld%lld%lld",&x,&a,&b)!=EOF)
	{
		if(b-a<=0)
		printf("delicious\n");
		
		else if(b-a<=x)
		printf("safe\n");
		else 
		printf("dangerous\n");
	}
}