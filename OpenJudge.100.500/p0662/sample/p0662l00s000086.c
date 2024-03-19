#include <stdio.h>

int a[2] = { 0 };
int b[2] = { 0 };

void swap(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = a;
}

int main(void) {
	int ans = 0;

	scanf("%d %d %d %d", &a[0], &a[1], &b[0], &b[1]);
	if (a[0] > b[0]) {
		swap(a[0], b[0]);
		swap(a[1], b[1]);
	}

	if (b[0] < a[1]) {
		if (b[1] <= a[1]) ans = b[1] - b[0];
		else ans = a[1] - b[0];
	}

	printf("%d\n", ans);

	return 0;
}