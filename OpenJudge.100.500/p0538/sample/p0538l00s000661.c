#include<stdio.h>
int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a <= 9 && b <= 9) {
		printf("%d", a * b);
	}
	else {
		printf("-1");
	}
	return 0;
}