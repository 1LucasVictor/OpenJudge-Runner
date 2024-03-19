#include<stdio.h>

int main(void) {
	int n =0, i;
	int a[200001] = { 0 };
	int b[200001] = { 0 };
	int *p;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) {
		scanf("%d", &a[i]);
		p = &b[0];
		p = p + a[i] -1;
		*p = *p + 1;
	}
	b[n] = 0;
	for (i = 0; i < n; i++) printf("%d\n", b[i]);

}