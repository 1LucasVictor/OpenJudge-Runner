#include<stdio.h>
#define MAX 200000
int main() {
	int R[MAX], maxv, minv, i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) { scanf("%d", &R[i]); }
	maxv = R[1] - R[0];
	minv = R[0];
	for (i = 1; i < n - 1; i++) {
		maxv = (maxv >= R[i] - minv ? maxv : R[i] - minv);
		minv = (minv <= R[i] ? minv : R[i]);
	}
	printf("%d", maxv);
	return 0;
}
