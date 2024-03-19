#include<stdio.h>

int main(){
	double x,y;
	double a,b,c,d,e,f;

	while(scanf("%lf %lf %lf %lf %lf %lf", &a,&b,&c,&d,&e,&f) != EOF){
		if(e == 0 && d*b != 0){
			x = (f/d);
			y = (c/b)-(a*f)/(b*d);
		}else if(b == 0 && a*e != 0){
			x = (c/a);
			y = (f/e)-(c*d)/(a*e);
		}else if(a == 0 && b*d != 0){
			y = (c/b);
			x = (f/d)-(c*e)/(b*d);
		}else if(d == 0 && a*e != 0){
			y = (f/e);
			x = (c/a)-(b*f)/(a*e);
		}else{
			x = (e*c - b*f)/(a*e - b*d);
			y = (f/e) - (d/e)*x;
		}

		if(x<0.0005 && x>-0.0005) x = 0;
		if(y<0.0005 && y>-0.0005) y = 0;

		printf("%.3lf %.3lf\n", x,y);
	}

	return 0;
}