#include<stdio.h>
int main()
{
	long long int s[30000],m,n,i,j,a=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&s[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			{
				a=1;
				break;
			}
			
		}
	}
	if(a==1)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
    return 0;
}