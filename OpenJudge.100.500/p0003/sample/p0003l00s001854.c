#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main(){
	int a, b, c, d, e, f;
	double x, y;
	while(scanf("%d", &a) != EOF){
	scanf("%d%d%d%d%d", &b, &c, &d, &e, &f);
	y = ((c * d) - (f * a)) / ((b * d) - (e * a));
	x = (c - b * y) / a;
	if(x > 0){
		x += 0.0005;
	}else if(x < 0){
		x -= 0.0005;
	}
	
	printf("%.3f %.3f\n", x, y);
	}
	return 0;
}