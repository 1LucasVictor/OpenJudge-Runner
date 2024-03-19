#include<stdio.h>

int main(void)
{
	int num = 0;
	int h, a;
	scanf("%d", &h);
	scanf("%d", &a);

	while (h > 0)
	{
		h -= a;
		num++;
	}
	printf("%d\n", num);
	return 0;
}