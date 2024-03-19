#include <stdio.h>
#include <stdlib.h>
int cmpint(const void *x, const void *y) {
	return *(int *)x - *(int *)y;
}
int main() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, 3, sizeof(int), cmpint);
	if (a[0] == 5 && a[1] == 5 && a[2] == 7) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}