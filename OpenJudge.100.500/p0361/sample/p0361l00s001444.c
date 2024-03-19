#include <stdio.h>

int main(void)
{
	int S, h, m, s;
	S = 46979;
	scanf("%d", &S);
	h = S / 3600;
	m = (S - 3600*h) / 60;
	s = S - 3600*h - 60*m;
	
	printf("%d:", h);
	printf("%d:", m);
	printf("%d\n", s);
	return 0;
}