#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c,d,e,f;
	float x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){
		x = ((float)c * e - (float)b * f) / ((float)a * e - (float)b * d);
		y = ((float)a * f - (float)c * d) / ((float)a * e - (float)b * d);
		if(x <= 0.0 && x > -5.0e-4)
			x = 0.0;
		if(y <= 0.0 && y > -5.0e-4)
			y = 0.0;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}