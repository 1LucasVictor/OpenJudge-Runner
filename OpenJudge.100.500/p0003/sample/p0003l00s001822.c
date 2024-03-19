#include <stdio.h>
#include <string.h>


int main(){
	int a,b,c,d,e,f,g,i,num;
	double y,x;
	
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){
	y = (c*d-a*f)/(b*d-a*e);
	x = (c-b*y)/a;
	//y = y + 0.0005;
	//x = x + 0.0005;
	
	printf("%.3lf %.3lf",x,y);
	}
	
	return 0;
}