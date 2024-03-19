#include<stdio.h>

int main(){
	double a,b,c,d,e,f;
	int temp;
	double x,y;
	
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f) != EOF){
		x=(c*e-b*f)/(a*e-b*d+0.);
		y=(f*a-c*d)/(a*e-d*b+0.);
		
		/*temp = (int)x*10000;
		
		if(temp%10>=5){
			x+=0.001;
		}
		
		
		temp = (int)y*10000;
		
		if(temp%10>=5){
			y+=0.001;
		}
		*/
		if(x>-0.001 && x<0.001)x=0;
        if(y>-0.001 && y<0.001)y=0;
		printf("%.3lf %.3lf\n",x,y);
	}

	return 0;
}