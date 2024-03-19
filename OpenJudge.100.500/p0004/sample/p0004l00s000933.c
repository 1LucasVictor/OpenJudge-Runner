#include <stdio.h>

int get_gcd(int x, int y);

int main(void)
{
	int x, y, gcd, lcm;
	while(scanf("%d %d", &x, &y)==2)
	{
		gcd = get_gcd(x, y);
		lcm = get_gcd(x * (y / gcd), y * (x / gcd));
		
		printf("%d %d", gcd, lcm);
	}
	return 0;
}

int get_gcd(int x, int y)
{
	if(x<y)
	{
		y = y % x;
	}
	while(x >= 1 && y >= 1)
	{
		x = x % y;
		if(x == 0)
			break;
		
		y = y % x;
	}

	return (x + y);
}