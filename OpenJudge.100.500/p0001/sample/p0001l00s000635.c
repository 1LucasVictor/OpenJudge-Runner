#include "stdio.h"

int main()
{
	int a, b, x, p;

	while(scanf("%d %d", &a, &b) != EOF){
		p = 1;

		x = a + b;

		while(x >= 10){
			x /= 10;

			p++;
		}

		printf("%d\n", p);
	}

	return 0;
}