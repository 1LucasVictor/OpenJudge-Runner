#include <stdio.h>
#include <string.h>


int main(){
	double a,b,c,d,e,f,g,i,num;
	double y,x;
	
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF){
	y = (c*d-a*f)/(b*d-a*e);
	x = (c-b*y)/a;
	//y = y + 0.0005;
	//x = x + 0.0005;
	
	printf("%.3lf %.3lf\n",x,y);
	}
	
	return 0;
}