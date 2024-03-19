#include<stdio.h>

int main(){
	
	int a, b, c, d, e, f;
	float j, i, o, u;
	
	while(scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF){

		i = (float) (c * e - f * b) / (a * e - b * d);
		j = (float) (c - a * i) / b;

		printf("%.3f %.3f\n", i, j);
	
	}
	
    return 0;
}