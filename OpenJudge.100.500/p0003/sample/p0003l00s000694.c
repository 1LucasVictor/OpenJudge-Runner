#include <stdio.h>
	
int main(){
	int a,b,c,d,e,f,g;
	
	while(EOF != scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)){
		g = a*e-b*d;
		printf("%.3f %.3f\n",((double) (c*e-b*f))/g,((double) (a*f-c*d))/g);
	}
	
	return 0;
}