#include <stdio.h>          // printf(), scanf()

#define MAX_N 200000
#define min(a, b) ((a) < (b) ? a : b)
#define max(a, b) ((a) > (b) ? a : b)

int
main(int argc, char** argv)
{
	int r[MAX_N];
	int n, i;

	int maxv = -1000000000;
	int minv = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", &r[i]);

	minv = r[0];
	for (i = 1; i < n; ++i)
	{
		maxv = max(maxv, r[i] - minv);
		minv = min(minv, r[i]);
	}

	printf("%d\n", maxv);
	return 0;
}