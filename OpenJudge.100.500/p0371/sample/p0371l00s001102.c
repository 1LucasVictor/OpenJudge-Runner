#include <stdio.h>

int main()
{
	int n, a;
	int minval = +1000000;
	int maxval = -1000000;
	long long sumval = 0;

	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &a);
		minval = minval < a ? minval : a;
		maxval = maxval > a ? maxval : a;
		sumval += a;
	}
	printf("%d %d %d\n", minval, maxval, sumval);
	return 0;
}
