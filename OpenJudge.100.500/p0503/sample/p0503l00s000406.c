/*
ABC154C - Distinct or Not
*/

#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
	int n;
	int a[200000];
	int i;
	int isFound = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &(a[i]));
	}

	qsort(a, n, sizeof(int), compare_int);

	for (i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) {
			isFound = 1;
			break;
		}
	}

	if (isFound == 0) {
		printf("YES");
	} else {
		printf("NO");
	}

	return 0;
}
