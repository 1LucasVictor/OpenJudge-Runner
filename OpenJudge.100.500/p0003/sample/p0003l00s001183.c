#include<stdio.h>

int main(){
	int a,b,c,d,e,f;
	double x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=-1){
		y = (c*d-f*a)/(b*d-e*a);
		x = (c-b*y)/a;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}