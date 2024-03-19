#include <stdio.h> 

int main(void)
{	
	long long int n,a[1000], i, j, tmp, sum=0;

	scanf("%lld",&n);

	for(i=0; i<n; i++)
	{
		scanf(" %lld",&a[i]);
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			if(a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	 
	printf("%lld %lld %lld\n",a[0],a[n-1],sum);


	return 0;
}