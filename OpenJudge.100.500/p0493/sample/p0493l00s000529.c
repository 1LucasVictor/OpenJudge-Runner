#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	int yen = 0;
	scanf("%d", &yen);

	printf("%d", yen / 500 * 1000 + (yen % 500) / 5 * 5);

	return 0;
}
