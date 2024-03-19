#include<stdio.h>

int main(){
	double a,b,c,d,e,f,g=0,x=0,y=0;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=-1){
		if(a!=0){
			y=(f-c*d/a)/(e-b*d/a);
			x=(c-b*y)/a;
		}else{
			x=(f-c*e/b)/d;
			y=c/b;
		}
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}