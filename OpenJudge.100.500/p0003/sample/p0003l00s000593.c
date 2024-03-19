#include <stdio.h>
#include <math.h>

int main(){
	double x,y;
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
		y=(double)(a*f-d*c)/(a*e-d*b);
		x=(double)(b*f-e*c)/(b*d-a*e);
		//y+=0.0005;
		//x+=0.0005;
		if(x==0.0)x=fabs(x);
		if(y==0.0)y=fabs(y);
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}