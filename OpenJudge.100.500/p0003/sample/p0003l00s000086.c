#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,d,e,f;
	float x,y;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF){
		if((b>=0&&e>=0)||(b<0&&e<0)){
			x=(c*abs(e)-f*abs(b))/(a*abs(e)-d*abs(b));
		}
		else{
			x=(c*abs(e)+f*abs(b))/(a*abs(e)+d*abs(b));
		}
		y=(c-a*x)/b;
		printf("%1.3f %1.3f\n",x,y);
	}
	return 0;
}