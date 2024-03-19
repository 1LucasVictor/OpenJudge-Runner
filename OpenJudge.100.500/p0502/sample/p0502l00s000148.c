#include<stdio.h>
int main(void)
{
	int n,i,a,t=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			if(a%3==0||a%5==0)
			;
			else t=-1;
		}
	}
	if(t==-1)
	printf("DENIED");
	else printf("APPROVED");
	return 0;
}