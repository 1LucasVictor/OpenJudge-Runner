#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c,d,e,f;
	float x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){
		x = ((float)c * e - (float)b * f) / ((float)a * e - (float)b * d);
		y = ((float)a * f - (float)c * d) / ((float)a * e - (float)b * d);
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}