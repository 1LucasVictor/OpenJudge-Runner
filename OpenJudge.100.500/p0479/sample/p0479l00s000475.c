#include<stdio.h>
int main()
{
	int n,a[200001]={0},i,t;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	} 
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}