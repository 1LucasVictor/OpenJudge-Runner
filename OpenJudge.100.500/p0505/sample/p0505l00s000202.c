#include<stdio.h>
int main()
{
	long long int a,sum=0;
	long long int b,c[12000];
	scanf("%lld %lld",&a,&b);
	for (int i = 0; i < b; i++)
	{
		scanf("%lld",&c[i]);
		sum=sum+c[i];
	}
	if (sum>=a)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}