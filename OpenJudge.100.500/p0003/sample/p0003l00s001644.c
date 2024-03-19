#include<stdio.h>

int main(void){
	float a,b,c,d,e,f;
	float x,y,kei,right,data;
	
	while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)==6){
		if(a>d){
			kei=a/d;
			d*=kei;
			e*=kei;
			f*=kei;
		}
		if(a<d){
			kei=d/a;
			a*=kei;
			b*=kei;
			c*=kei;
		}
		
		y=b-e;
		right=c-f;
		y=right/y;
		
		data=y*b;
		c-=data;
		x=c/a;
		
		printf("%.3f %.3f\n",x,y);
	}
	
	return 0;
}