#include<stdio.h>
	int main(void)
{
	int S, s, h, m, temp;
	scanf("%d", &S);
	h = S / 3600;
	S = S - 3600 * h;
	m = S / 60;
	S = S - 60 * m;
	s = S;
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}