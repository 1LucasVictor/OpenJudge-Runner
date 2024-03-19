#include<stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);

	int h, m, s;

	h = x / 3600;
	m = (x - h*3600) / 60;
	s = x - h*3600 - m*60;

	printf("%d:%d:%d\n",h,m,s);
	
	return 0;
}