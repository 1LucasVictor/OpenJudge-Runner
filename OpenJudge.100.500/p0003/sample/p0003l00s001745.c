#include <stdio.h>

int main() {
	float x, y;
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a ,&b ,&c ,&d ,&e ,&f )!=EOF) {
		x = (float)(e*c-b*f) / (float)(a*e-b*d);
		y = (float)(a*f-c*d) / (float)(a*e-b*d);
		if (x == -0.000000) x = 0.000000;
		if (y == -0.000000) y = 0.000000;
		if ( ((x*1000.0)-((float)((int)(x*1000.0)))) >=0.500000) x+=0.001;
		if ( ((y*1000.0)-((float)((int)(y*1000.0)))) >=0.500000) y+=0.001;
		printf("%.3f %.3f",x ,y);
	}
	return 0;
}