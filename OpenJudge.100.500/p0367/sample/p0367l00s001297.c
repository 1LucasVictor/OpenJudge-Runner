#include <stdio.h>

int main()
{
	int a, b, c, cnt = 0, num = 0;
	scanf("%d%d%d", &a, &b, &c);
	for (; a <= b; a++)
	{
		num = c % a;
		if (num == 0)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);
	
	return 0;
}