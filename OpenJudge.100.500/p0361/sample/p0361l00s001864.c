#include <stdio.h>

int main(void)
{
	int x, h, m, s;
	
	scanf("%d", &x);
	
	s = x % 60;
	m = (x / 60) % 60;
	h = x / 3600;
	
	printf("%d:%d:%d\n", h, m, s);
	
	return 0;
}