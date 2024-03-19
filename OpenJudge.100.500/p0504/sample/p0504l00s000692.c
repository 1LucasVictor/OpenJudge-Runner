#include <stdio.h>
int main()
{
	int h, a, ctr = 0;
	scanf("%d %d", &h, &a);
	while(h > 0)
	{
		h -= a;
		ctr++;
	}
	printf("%d", ctr);
	return 0;
} 