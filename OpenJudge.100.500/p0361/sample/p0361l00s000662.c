#include <stdio.h>

int main(void)
{
	int s, h, m;

	scanf("%d", &s);
	h = s/3600;
	m = s%3600 / 60;
	printf("%d:%d:%d\n", h, m, s%60);
	return 0;
}