#include<stdio.h>
int main()
{
	long long int a,sum=0;
	int b,c[12000];
	scanf("%lld %d",&a,&b);
	for (int i = 0; i < b; i++)
	{
		scanf("%d",&c[i]);
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