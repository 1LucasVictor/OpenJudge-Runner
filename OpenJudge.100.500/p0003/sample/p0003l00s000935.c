#include<stdio.h>

int main(){
	
	int a, b, c, d, e, f;
	float j, i, o, u;
	
	while(1){
	
	if(scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) == EOF){
		
	break;
		
	}

	i = (c * e - f * b) / (a * e - b * d);
	j = (c - a * i) / b;
	
	if(-0.0005 < i && i <= 0){
		i = 0;
	}
	
    if(-0.0005 < j && j <= 0){
		j = 0;
    }
	
	printf("%.3f %.3f\n", i, j);
	
	}
	
    return 0;
}