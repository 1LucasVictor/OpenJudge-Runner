#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void * a , const void * b) {
	return *(int *)a - *(int *)b;
}

int main(void) {
	int data[3];
	scanf("%d %d %d", &data[0], &data[1], &data[2]);
	size_t len = sizeof(data) / sizeof(data[0]);
	qsort(data, len, sizeof(data[0]), cmp);
	for (int i = 0; i < len; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", data[i]);
	}
	printf("\n");
	return 0;
}