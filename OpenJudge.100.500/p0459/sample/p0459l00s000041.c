#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592653589793

int main(void) {
	int flg=0;
	int x, y;

	scanf("%d%d", &x, &y);

	for (int i = 1; i <= x; i++)
	{
		if ((i * 2) + ((x - i) * 4) == y)
		{
			flg = 1;
		}
		if ((i * 4) + ((x - i) * 2) == y)
		{
			flg = 1;
		}
	}
	if (flg == 0)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n");
	}
	return 0;
}