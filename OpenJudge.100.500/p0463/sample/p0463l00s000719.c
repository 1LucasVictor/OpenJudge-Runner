#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main()
{
	int N;
	int ans = 0;

	scanf("%d", &N);
	if (N >= 100)
		N %= 100;
	if (N >= 10)
		N %= 10;
	if (N == 3) {
		printf("bon\n");
		return (0);
	}
	if (N == 0 || N == 1 || N == 6 || N == 8) {
		printf("pon\n");
		return (0);
	}
	else {
		printf("hon\n");
	}
	return (0);
}