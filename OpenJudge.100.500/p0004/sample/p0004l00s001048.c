#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	char buff[1024];
	long a, b, c, r;

	while (fgets (buff, 1024, stdin) != NULL) {
		sscanf (buff, "%ld %ld", &a, &b);

		if (a < b) {
			c = b;
			b = a;
			a = c;
		}

		r = a % b;
		if ((b % r) != 0) {
			r = b % r;
			while ((r % r) != 0) {
				r = r % r;
			}
		}
		printf ("%ld %ld\n", r, (long)(a * b / r));
	}
	
	return 0;
}

