#include <stdio.h>
int main()
{
	int h, a;
	scanf("%d %d", &h, &a);
	int s = 1;
	while (h - a > 0)
	{
		s++;
		h -= a;
	}
	printf("%d", s);
	return 0;
}