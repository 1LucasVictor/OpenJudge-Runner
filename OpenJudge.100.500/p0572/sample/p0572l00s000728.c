#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
	int L,R;
	scanf("%d %d",&L,&R);
	int min = 2019, div[3000];
	for (int i = 0; i < 3000; i++) {
		div[i] =2019;
	}
	for (int i = 0; i < 2019; i++) {
		if (L+i > R) break;
		div[i] = (L+i)%2019;
	}
	qsort(div, 3000, sizeof(int), compare_int);
	for (int i = 0; div[i] != 2019; i++) {
		for (int j = i+1; div[j] != 2019; j++) {
			int tmp = 0;
			tmp = div[i]*div[j];
			if (tmp < min) min = tmp;
			else if (min == 0) break;
		}
	}
	printf("%d\n",min);
	return 0;
}