#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int h, n, a[10000];
	unsigned long long b = 0;
	scanf("%d %d", &h, &n);
	for (int i = 0; i != n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i != n; i++) {
		b = b + a[i];
	}
	if (b >= h) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;

}