#include <stdio.h>
#include <math.h>
#define SWAP(a,b) a=a+b,b=a-b,a=a-b
int main ()
{
	int n,i;
	int t;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&t);
		if (t%2==0)
		{
			if (t%3!=0  && t%5!=0)
			{
				printf ("DENIED");
				return 0;
			}
		}
	}
	printf ("APPROVED");
    return 0;
}