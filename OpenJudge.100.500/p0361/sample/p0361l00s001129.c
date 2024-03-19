#include<stdio.h>

int main(void)
{
	int S, h, m ,s;
	scanf("%d\n", &S);
	
	h = S / 60 / 60 % 60;
	m = S / 60 % 60;
	s = S % 60;
	
	printf("%d:%d:%d\n", h, m, s);
	
	return 0;
}
