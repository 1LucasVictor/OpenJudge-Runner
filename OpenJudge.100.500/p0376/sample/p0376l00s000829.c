#include <stdio.h>

int main(void)
{
	int n, i;
	int a[100] = {0};

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d ", &a[i]);
	}

	for (i = n; i > 0; i--){
		printf("%d", a[i - 1]);
		if (i != 1) putchar(' ');
	}
	putchar('\n');
	return 0;
}