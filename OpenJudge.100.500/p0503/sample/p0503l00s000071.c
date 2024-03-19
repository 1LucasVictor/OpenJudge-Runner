#include<stdio.h>
int main()
{
	long long int a[200000];
	long long int i,n;
	int b=0,j;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n&&j!=i;j++)
		{
			if(a[j]==a[i])
			{
				printf("NO");
				b=1;
				break;
			}
		}
		if(b==1) break;
	}
	if(b==0)
	{
		printf("YES");
	}
	return 0;
}