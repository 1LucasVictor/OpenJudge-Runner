#include<stdio.h>
int main(void){
	int a,b,c,d,e,f;
	double x,y;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF){
	if(b*d-a*e==0)y=0;
	else y=(c*d-a*f)/(b*d-a*e);
	if(c*e-b*f==0)x=0;
	else x=(c*e-b*f)/(a*e-b*d);
	
	
	printf("%.3f %.3f\n",x+1e-15,y+1e-15);
	}
	return 0;
}