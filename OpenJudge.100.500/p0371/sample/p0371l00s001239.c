#include <stdio.h>
int main(void)
{
	int n;
	int a[10001];
	int max=-1000002;
	int min=1000002;
	int x;
	int y;
	long long z=0;

	scanf("%d", &n);
	for (x = 0; x < n; x++)
	{
		scanf("%d", &a[x]);
	}
	
	for (y=0; y < n ; y++ )
	{
		if (max<a[y])
		{
			max=a[y];
		}
		if (min>a[y])
		{
			min=a[y];
		}
		z=z+a[y];

	}

	printf("%d %d %lld\n", min, max, z);

	return 0;

}