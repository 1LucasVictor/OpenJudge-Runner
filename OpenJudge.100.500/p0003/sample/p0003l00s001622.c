#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	char buff[1024];
	float a, b, c, d, e, f;
	float x, y;

	while (fgets (buff, 1024, stdin) != NULL) {
		sscanf (buff, "%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

		y = (a * f - d * c) / (a * e - b * d);
		x = (c - b * (a * f - d * c) / (a * e - b * d)) / a;
		
		printf ("%.3f %.3f\n", x, y);
	}
	
	return 0;
}

