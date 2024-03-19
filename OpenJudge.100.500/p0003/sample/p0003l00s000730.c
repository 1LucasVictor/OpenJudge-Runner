#include <stdio.h>

int main(){
	double a,b,c,d,e,f;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)>0){
			b/=a;
			c/=a;
			a=1;
			
			e-=b*d;
			f-=c*d;
			d=0;
			
			f/=e;
			e=1;
			
			c-=f*b;
			b=0;
			printf("%.3f %.3f\n",c,f);
	}
	return 0;
}