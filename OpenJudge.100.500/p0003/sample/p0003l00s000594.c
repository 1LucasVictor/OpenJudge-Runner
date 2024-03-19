#include<stdio.h>
int main(void){
	int a,b,c,d,e,f;
	double x,y,g,h;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
		g=(c*d-a*f)/(b*d-a*e);
		h=(c-b*g)/a;
		if(g>=0){
			x=(int)(g+0.5);
		}else{
			x=(int)(g-0.5);
		}
		if(h>=0){
			y=(int)(h+0.5);
		}else{
			y=(int)(h-0.5);
		}
		printf("%.3f %.3f\n",y,x);
	}
	return 0;
}
