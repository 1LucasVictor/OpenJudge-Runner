#include<stdio.h>
#include<math.h>

int main(void){

	float a,b,c,d,e,f,x,y;

	while(scanf("%f %f %f %f %f %f\n",&a,&b,&c,&d,&e,&f)!=EOF){
		x=(f-e*c/b)/(d-e*a/b);
		y=(c-a*x)/b;
		printf("%.3f %.3f\n",roundf(x*1000)/1000,roundf(y*1000)/1000);
	}

	return 0;
}