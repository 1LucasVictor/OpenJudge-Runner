#include <stdio.h>
#include <math.h>
int main(void){
	double a,b,c,d,e,f,x,y;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f) != EOF){
		x = (c*e-b*f)/(a*e-b*d);
		y = (-c*d+a*f)/(a*e-b*d);
		double vx,vy;
		if(ceil(x*1000)-x*1000>x*1000-floor(x*1000)){
			vx = floor(x*1000);
		}else{
			vx = ceil(x*1000);
		}
		if(ceil(y*1000)-y*1000>y*1000-floor(y*1000)){
			vy = floor(y*1000);
		}else{
			vy = ceil(y*1000);
		}
		double newx,newy;
		newx = vx/1000;
		newy = vy/1000;
		if(newx == -0.000){
			newx = 0.000;
		}
		if(newy == -0.000){
			newy = 0.000;
		}
		printf("%.3f %.3f\n",newx,newy);
		
	}
	return 0;
}  