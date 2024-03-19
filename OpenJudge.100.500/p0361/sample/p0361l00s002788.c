#include <stdio.h>

int main(void)
{
	int S,h,m,s;
	scanf("%d", &S);
	h=S/3600;
	m=S%3600/60;
	s=S%3600%60/1;
	printf("%d:%d:%d\n", h,m,s);
	return 0;
}