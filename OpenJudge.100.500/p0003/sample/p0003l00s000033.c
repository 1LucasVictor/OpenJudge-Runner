#include<stdio.h>
int main(void){
	int a,b,c,d,e,f;
	double x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
		y=(c*d-a*f)/(b*d-a*e);
		x=(c-b*y)/a;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}
