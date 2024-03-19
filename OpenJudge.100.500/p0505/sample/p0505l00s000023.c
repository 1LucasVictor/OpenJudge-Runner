#include<stdio.h>
int main(void) {
	long h, n;
	long i,j,tmp,a[1000];
	long max = 0;
	scanf("%ld %ld", &h, &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		max += a[i];
	}
	if (h - max <= 0)
		printf("Yes");
	else
		printf("No");
	return 0;
}