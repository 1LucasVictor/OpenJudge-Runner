#include <stdio.h>
#include <string.h>
#define SWAP(a,b) a=a+b,b=a-b,a=a-b
int main ()
{
	int a[200007];
	int i,j,ind=0,n;
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=1;i<=n-1;i++)
	{
		for (j=i+1;j<=n;j++)
		{
			if (a[i]>a[j])
			{
				SWAP(a[i],a[j]);
			}
		}
	}
	for (i=1;i<n;i++)
	{
		if (a[i]==a[i+1])
		{
			ind=1;
			break;
		}
	}
	if (ind==1)
	{
		printf ("NO\n");
	}
	else
	{
		printf ("YES\n");
	}
	return 0;
}