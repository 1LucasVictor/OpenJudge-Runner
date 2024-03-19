#include<stdio.h>

int main(void)

{
	int n, a, b;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	if (a*n < b) {
		printf("%d", n * a);

	}
	else {
		printf("%d",  b);

	}
	return 0;
}