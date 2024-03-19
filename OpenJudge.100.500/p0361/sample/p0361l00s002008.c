#include <stdio.h>
int main(void)
{
	unsigned int S;
	unsigned int h;
	unsigned int m;
	unsigned int s;

	scanf("%d", &S);
	h = S / 3600;
	m = (S % 3600) / 60;
	s = (S % 3600) % 60;

	printf("%d:%d:%d\n",h,m,s);
	return 0;
}