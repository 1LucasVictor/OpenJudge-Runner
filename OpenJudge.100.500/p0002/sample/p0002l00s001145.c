#include <stdio.h>




void sort(int *, int *, int *);
void swapd(int *,int *);

int main(void){
	
	int N;
	int a[1000], b[1000], c[1000];
	int i=0;

	do {
		scanf("%d", &N);
	} while (N >= 1000);

	while (i < N) {
		scanf("%d%d%d", &a[i], &b[i], &c[i]);
		if (((1 <= a[i]) && (a[i] <= 1000)) && ((1 <= b[i]) && (b[i] <= 1000)) && ((1 <= c[i]) && (c[i] <= 1000))) {
			i++;		
		}

	}
	

	for (i = 0; i < N; i++) {
		sort(&a[i], &b[i], &c[i]);
		if ((c[i] * c[i]) == (a[i] * a[i] + b[i] * b[i])) {
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
	if (*b > *c) swapd(b, c);
	if (*a > *b) swapd(a, b);
}