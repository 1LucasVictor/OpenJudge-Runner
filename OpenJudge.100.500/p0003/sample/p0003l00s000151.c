#include <stdio.h>

int main(void) {
	int a, b, c, d , e ,f ;
	float x, y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=-1){
		x = (float)(c * e - b * f) / (a * e - b * d);
		y = (float)(-d * c + a * f) / (a * e - b * d);
		printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}