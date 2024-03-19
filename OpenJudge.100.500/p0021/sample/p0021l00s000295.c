#include <stdio.h>
int array[5001];
int n,i,sum=-5000,k=0;
void tansaku(int a)
{
	k += array[a];
	if(k > sum)
	{
		sum = k;
	}
	if(a == n-1)return;
	tansaku(a+1);
}
int main(void)
{
	while(1)
	{
		sum = 0;
		for(i=0;i<5001;i++)
		{
			array[i] = 0;
		}
		scanf("%d",&n);
		if(n==0)break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
		for(i=0;i<n;i++)
		{
			tansaku(i);
			k = 0;
		}
		printf("%d\n",sum);
	}
	return 0;
}