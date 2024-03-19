#include<stdio.h>

int main()
{
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		int sum=0;
		if(x==0)break;
		while(x)
		{
			sum+=x%10;
			x/=10;
		}
		printf("%d\n",sum);
	}

	return 0;
}