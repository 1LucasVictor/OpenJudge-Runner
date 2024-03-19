#include <stdio.h>

int main(void){
	float a,b,c,d,e,f;
	
	while(scanf("%f",&a)!=EOF){
		scanf("%f %f %f %f %f",&b,&c,&d,&e,&f);
		printf("%.3lf %.3f\n",(b*f-c*e)/(b*d-a*e),(d*c-a*f)/(b*d-a*e));
	}
	return 0;
}