#include<stdio.h>
int main(void)
{
	double a,b,c,d,e,f,x,y;

	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
		x=(c*e-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
		if(x-(double)(int)x>=0.0005)x+=0.001;
		if(y-(double)(int)y>=0.0005)y+=0.001;
		if((double)(int)x-x>=0.0005)x-=0.001;
		if((double)(int)y-y>=0.0005)y-=0.001;
		
		if((int)(x*1000)==0)x=0;
		if((int)(y*1000)==0)y=0;

		printf("%.3f %.3f\n",x,y);
	}

	return 0;
}