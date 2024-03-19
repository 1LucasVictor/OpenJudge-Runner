#include <stdio.h>
int main(void)
{
	int S, h, m, s, a, b;
	scanf("%d",&S);
	h = S / 3600;
	a = S - (h * 3600);
	m = a / 60;
	s = a - (m * 60);
	printf("%d:%d:%d\n",h, m, s);
	return 0;
}