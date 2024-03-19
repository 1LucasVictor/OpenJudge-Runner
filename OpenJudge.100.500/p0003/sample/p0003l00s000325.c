#include <stdio.h>

int main(){
	int a,b,c,d,e,f;
	float x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){
		x = (float)(c * e - b * f) / (float)(a * e - b * d);
		y = (float)(a * f - c * d) / (float)(a * e - b * d);
		if(x == -0.0) x = 0.0;
		if(y == -0.0) y = 0.0;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}