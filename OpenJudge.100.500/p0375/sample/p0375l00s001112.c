#include<stdio.h>
int N,i,x;
int main()
{
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		x=i;
		if(x%3==0)printf(" %d",i);
		else
		{
			for(;x&&x%10!=3;)
				x/=10;
			if(x%10==3)
				printf(" %d",x);
		}
	}
	puts("");
	return 0;
}