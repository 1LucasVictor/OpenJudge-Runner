#include <stdio.h>

void sort(int *, int *, int *);
void swapd(int *,int *);

int main(void){
	
	int N;
	int a[1000], b[1000], c[1000];
	int i;

	do {
		scanf("%d", &N);
	} while (N > 1000);

	for (i = 0; i < N; i++) {
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}

	for (i = 0; i < N; i++) {
		sort(&a[i], &b[i], &c[i]);
		if (c[i] * c[i] == a[i] * a[i] + b[i] * b[i]) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}

void swapd(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort(int *a, int *b, int *c) {
	if (*a > *b) swapd(a, b);
	if (*b > *c) swapd(a, c);
	if (*a > *b) swapd(a, b);
}