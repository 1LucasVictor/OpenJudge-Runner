#include <stdio.h>

int main() {
	double x, y;
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a ,&b ,&c ,&d ,&e ,&f )!=EOF) {
		x = (double)(e*c-b*f) / (double)(a*e-b*d);
		y = (double)(a*f-c*d) / (double)(a*e-b*d);
		if (x == -0.000000) x = 0.000000;
		if (y == -0.000000) y = 0.000000;
		printf("%.3f %.3f\n",(double)x ,(double)y);
	}
	return 0;
}