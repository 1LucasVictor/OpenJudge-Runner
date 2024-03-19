#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	
	if(scanf("%d %d %d %d", &a, &b, &c, &d) > 0)
	{
	int answer;
	if(c < b || a < d)
	{	
		int bigger, smaller;
		if(a < c)
		{
			bigger = c;
		}
		else
		{
			bigger = a;
		}
		if(b < d)
		{
			smaller = b;
		}
		else
		{
			smaller = d;
		}
		answer = smaller - bigger;
	}
	else
	{
		answer = 0;
	}
	printf("%d", answer);
	}
}