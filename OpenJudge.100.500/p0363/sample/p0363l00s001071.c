#include <stdio.h>
#include <stdlib.h>

void swap(int *a1, int *a2)
{
	int t = *a1;

	*a1 = *a2;
	*a2 = t;
}

int main(int argc, char *argv[])
{
	int a[3], i, flag;

	scanf("%d %d %d", &a[0], &a[1], &a[2]);

	do {
		for (i = 1, flag = 0; i < 3; i++) {
			if (a[i - 1] > a[i]) {
				swap(&a[i - 1], &a[i]);
				flag = 1;
			}
		}
	} while (flag == 1);

	printf("%d %d %d\n", a[0], a[1], a[2]);

	return 0;
}