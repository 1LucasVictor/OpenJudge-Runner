#include<stdio.h>
int main() {
	int n;

	scanf("%d", &n);
	int h,k;
	for (int i = 3; i <= n; i++) { 
		h = i;
		k = i/10;
		if (i % 3 == 0)
			printf(" %d", i);

		else if (h % 10 == 3||k/10==3)
			printf(" %d", h);
	}putchar('\n');

	return 0;
}