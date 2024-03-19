#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	double b;
	
	if (scanf("%d", &a) < 0) {
		exit(1);
	}
	if (scanf("%lf", &b) < 0) {
		exit(1);
	}
	
	int c;
	c = (int)((double)a * b);
	printf("%d\n", c);
}