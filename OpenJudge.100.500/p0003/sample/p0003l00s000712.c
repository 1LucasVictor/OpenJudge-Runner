#include<stdio.h>
int main(void){
	int a,b,c,d,e,f;
	int A,B,C,D,E,F;
	double x,y;
	while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)!=EOF){
		B=b*d;
		C=c*d;
		E=a*e;
		F=a*f;
		y=(C-F)/(B-E);
		A=a*e;
		C=c*e;
		D=b*d;
		F=b*f;
		x=(C-F)/(A-D);
		printf("%1.3lf %1.3lf\n",x,y);
		
	}
	return 0;
}