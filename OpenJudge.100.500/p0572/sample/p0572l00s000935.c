#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
	int L,R;
	scanf("%d %d",&L,&R);
	int min = 0, div[100000];
	for (int i = 0; i < 3000; i++) {
		div[i] = 2019;
	}
	for (int i = 0; i < R-L+1; i++) {
		if (i >= 1000000) break;
		div[i] = (L+i)%2019;
	}
	qsort(div, 3000, sizeof(int), compare_int);
	min = div[0]*div[1];
	printf("%d\n",min);
	return 0;
}