#include <stdio.h>          // printf(), scanf()

int
main(int argc, char** argv)
{
	int t;
	int n, i;

	t = 100000;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		t = (t * 105) / 100;
		t = (t + 999) / 1000;
		t *= 1000;
	}

	printf("%d\n", t);
	return 0;
}