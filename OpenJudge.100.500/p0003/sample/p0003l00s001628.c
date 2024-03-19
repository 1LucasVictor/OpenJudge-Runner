#include<stdio.h>

int main(){
	
	int a, b, c, d, e, f;
	float j, i, o, u;
	
	while(1){
	
	if(scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) == EOF){
		
	break;
		
	}
	
	o = a;
	u = d;
	
	a *= d;
	b *= d;
	c *= d;
	
	d *= o;
	e *= o;
	f *= o;
	
	j = (c - f) / (b - e);
	
	i = ( (c / u) - (b / u) * j ) / a * u;
	
	printf("%.3f %.3f\n", i, j);
	
	}
	
    return 0;
}