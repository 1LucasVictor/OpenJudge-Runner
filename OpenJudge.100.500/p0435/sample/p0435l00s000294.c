#include<stdio.h>
#include<math.h>
#include <limits.h>
#include<stdlib.h>
#include<string.h>


int main() {
	int n, d;
	int count = 0;
	scanf("%d %d", &n, &d);

	int* x = (int*)malloc(sizeof(int) * n);
	int* y = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", x + i, y + i);
	}

	for (int i = 0; i < n; i++) {
		if (sqrt(*(x + i) * *(x + i) + *(y + i) * *(y + i)) <= d) {
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}