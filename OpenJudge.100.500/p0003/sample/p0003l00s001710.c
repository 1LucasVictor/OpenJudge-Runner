#include <stdio.h>
int main(){
	int a, b, c, d, e, f;
	double x, y;
	while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF){
		x = (double)(e*c - b*f)/(e*a - b*d);
		y = (double)(c*d - a*f)/(b*d - a*e);
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}