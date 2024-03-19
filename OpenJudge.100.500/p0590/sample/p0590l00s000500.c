#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d",&a[i]);
	}
	qsort(a,5,sizeof(int),compare_int);
	int k;
	scanf("%d",&k);
	int dif = a[4] - a[0];
	if (dif <= k) printf("Yay!\n");
	else printf(":(\n");
	return 0;
}