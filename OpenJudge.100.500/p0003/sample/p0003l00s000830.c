#include<stdio.h>

int main (void){
	
	double a,b,c,d,e,f,x,y,x1,x2,y1,y2;
	
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF){;
	
	
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	
	x1 = (int) x*10000;
	x2 = ((int) x*1000)*10;
	
	if(x1-x2>=5){
		x += 0.001;
	}
	
	y1 = (int) y*10000;
	y2 = ((int) y*1000)*10;
	
	if(y1-y2>=5){
		y += 0.001;
	}
	
	
	
	
	printf("%.3lf %.3lf\n",x,y);
	}
	
return 0;
}