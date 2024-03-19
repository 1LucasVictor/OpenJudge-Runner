#include <stdio.h>

int main(void)
{
	int a, b, c, count = 0;
	int i;

	scanf("%d %d %d", &a, &b, &c);
	if(b < a)
		return -1;
	for(i = a;i <= b;i++)
	{
		if (c % i == 0)
			count++;
	}
	printf("%d\n", count);

	return 0;
}