#include <stdio.h>
#include <string.h>

void swap(double *a, double *b, double *a2, double *y2);

int main(void) {
	int n;
	double x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d", &n);
	while(n--) {
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		if( x1 > x2)
			swap(&x1, &y1, &x2, &y2);
		if( x3 > x4)
			swap(&x3, &y3, &x4, &y4);
		if( (y2-y1)/(x2-x1) == (y4-y3)/(x4-x3))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

void swap(double *a1, double *b1, double *a2, double *b2) {
	double dummy;
	dummy = *a1;
	*a1 = *a2;
	*a2 = dummy;
	dummy = *b1;
	*b1 = *b2;
	*b2 = dummy;
}