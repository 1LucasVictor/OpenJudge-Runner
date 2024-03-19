#include <stdio.h>
int main(){
	float a,b,c,d,e,f,x,y;
	while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF){
		y=(a*f-d*c)/(a*e-d*b);
		x=(c-b*y)/a;
		printf("%5.3f %5.3f\n",x,y);
	}
	return 0;
}