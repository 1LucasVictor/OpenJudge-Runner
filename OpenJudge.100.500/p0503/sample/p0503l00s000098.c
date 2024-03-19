#include<stdio.h>
int main()
{
	int n,i,j,a[200000],temp,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("NO");
				x++;
				break;
			}
		}
	}
	if(x==0)
	printf("YES");
}