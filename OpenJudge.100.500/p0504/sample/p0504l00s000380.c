#include<stdio.h>
int main(void)
{
	int h, a, b = 0;
	scanf("%d%d", &h, &a);
	while (h > 0) {
		h = h - a;
		b++;
	}
	printf("%d", b);
	return 0;
}