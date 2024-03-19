#include<stdio.h>

int main(void){

	double a,b,c,d,e,f,x,y;

	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		b=b*(d/a),c=c*(d/a);
		b=b-e,c=c-f;
		y=c/b;
		x=f/d-(e*y)/d;
		x=x*1000,y=y*1000;
		if(x>0){
			x=(double)(int)(x+0.5);
		}
		else{
			x=(double)(int)(x-0.5);
		}
		if(y>0){
			y=(double)(int)(y+0.5);
		}
		else{
			y=(double)(int)(y-0.5);
		}
		x=x/1000;y=y/1000;
		printf("%.3f %.3f\n",x,y);
	}

	return 0;
}