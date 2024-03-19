#include<stdio.h>
int main(){
	double c,x,y,a,b,t,d,e,f;
		while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
			x=(c*e-b*f)/(a*e-b*d);
			y=(d*c-a*f)/(b*d-a*e);
			if(x==-0)
				x=0;
			if(y==-0)
				y=0;
			printf("%.3f %.3f\n",x,y);
		}
}
