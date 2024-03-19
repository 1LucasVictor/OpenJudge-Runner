#include<stdio.h>
int main()
{
	long long n,k,max,min;
	scanf("%I64d %I64d",&n,&k);
	if(n>k)
	{
		max=n;
		min=k;
	}
	else
	{
		max=k;
		min=n;
	}
	long long s=max%min;
	printf("%I64d\n",min-s);
	return 0;
}