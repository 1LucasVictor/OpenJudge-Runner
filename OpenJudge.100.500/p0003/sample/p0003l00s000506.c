#include <stdio.h>

int main(){
	int a,b,c,d,e,f,g,h,i,j,k,l;
	double x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
	g=b*d;
	h=e*a;
	i=c*d;
	j=f*a;
	k=g-h;
	l=i-j;
	y=(double)l/(double)k;
	x=((double)c-(double)b*(double)y)/(double)a;
	printf("%.3f %.3f",x,y);
	}
	return 0;
}