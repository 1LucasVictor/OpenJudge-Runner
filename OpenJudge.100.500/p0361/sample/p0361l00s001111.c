#include <stdio.h>
int main()
{
	int S, a, b, c;

	scanf("%d", &S);

	a = S / 3600;
	b = S % 3600 / 60;
	c = S % 3600 % 60;

	printf("%d:%d:%d\n", a, b, c);
	return 0;
}
