#include<stdio.h>

int main(){
	//freopen("in/0004.txt","r",stdin);
	int a,b,c,d,e,f;
	float x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
		x=a*e-b*d;
		y=(a*f-d*c)/x;
		x=(c*e-f*b)/x;
		x=x==0? 0.0:x;
		y=y==0? 0.0:y;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}