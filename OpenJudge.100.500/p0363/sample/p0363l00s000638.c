#include <stdio.h>
#include <stdlib.h>

int
cmp_int(const void *a, const void *b)
{
	if (*(int *)a > *(int *)b) return 1;
	if (*(int *)a < *(int *)b) return -1;
	return 0;
}

int
main()
{
	int a[3];	
	scanf("%d %d %d", &a[0], &a[1], &a[2]);

	qsort(a, 3, sizeof(int), cmp_int);
	printf("%d %d %d\n", a[0], a[1], a[2]);

	return 0;
}