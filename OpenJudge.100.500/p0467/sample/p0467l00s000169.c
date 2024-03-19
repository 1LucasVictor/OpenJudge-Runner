#include<stdio.h>

int main()
{
	int a,b,c,k;
	int result;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	if(a>=k)
	{
		result=k;
	}
	else
	{
		if((a+b)>=k)
		{
			result=a;
		}
		else
		{
			result=a-(k-a-b);
		}
	}
	printf("%d",result);
	return 0;
}