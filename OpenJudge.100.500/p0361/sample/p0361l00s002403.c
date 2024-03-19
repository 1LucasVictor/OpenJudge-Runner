#include <stdio.h>

int main(void)
{
	int s;
	int h, m, sec;
	
	scanf("%d", &s);
	
	h = s / 3600;
	m = (s % 3600) / 60;
	sec = s - (h * 3600 + m * 60);
	
	printf("%d:%d:%d\n", h, m, sec);
	
	return (0);
}