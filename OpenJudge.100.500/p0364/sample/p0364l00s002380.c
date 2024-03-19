#include <stdio.h>

int main()
{
	int w, h, x, y, r, a;

	w = 0;
	h = 0;
	x = 0;
	y = 0;
	r = 0;

	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
	a = 0;

	if (x >= w)
	{
		a = 1;
		if (y >= h)
		{
			a = 1;
			if (r > w)
			{
				a = 1;
				if (r > h)
				{
					a = 1;
				}
			}
		}
	}
	else
	{
		a = 0;
	}
	if (a == 0)
	{
		printf("Yes\n");

	}
	else
	{
		printf("No\n");
	}


	return(0);

}