#include<stdio.h>
int main(void)
{
	int  a, b, c;
	scanf("%d %d", &a, &b);
	if (b % a == 0) {
		c = a + b;
		printf("%d", c);
	}
	else {
		c = b - a;
		printf("%d", c);
	}
	return 0;
}