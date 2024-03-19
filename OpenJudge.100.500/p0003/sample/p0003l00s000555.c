#include<stdio.h>

int main(void){

	double a,b,c,d,e,f,x,y;

	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		b=b*(d/a),c=c*(d/a);
		b=b-e,c=c-f;
		y=c/b;
		x=f/d-(e*y)/d;
		printf("%.3f %.3f",x,y);
	}

	return 0;
}