#include <stdio.h>

int main()
{
	long a, b, x, y, tmp;
	while(scanf("%ld %ld", &x, &y) != EOF) {
		if(x < y) {
			tmp = x;
			x = y;
			y = tmp;
		}
		a = x;
		b = y;
		do {
			tmp = x % y;
			x = y;
			y = tmp;
		} while(y != 0);
		printf("%ld %ld\n", x, a * b / x);
	}
	return 0;
}