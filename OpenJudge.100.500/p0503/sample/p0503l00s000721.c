#include<stdio.h>
int fun(long a[],long n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				return 1;
			else return 0;
		}
	}
}
int main()
{
	long n,a[300000];
	int i,j;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	if(fun(a,n)==1) printf("NO");
	else printf("YES");
}