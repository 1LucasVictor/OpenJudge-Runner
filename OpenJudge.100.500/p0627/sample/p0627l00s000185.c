#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main() {

	int a, b;
	long long int result[3];

	scanf("%d %d", &a, &b);

	result[0] = a + b;
	result[1] = a - b;
	result[2] = a * b;

	qsort(result, 3, sizeof(long long int), compare_int);
	printf("%lld", result[2]);

	return 0;
}

