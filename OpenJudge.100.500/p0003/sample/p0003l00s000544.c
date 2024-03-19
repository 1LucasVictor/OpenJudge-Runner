#include<stdio.h>
float calcy(float,float,float,float,float,float);
float calcx(float,float,float,float);
int main(void)
{
	int a,b,c,d,e,f;
	float x,y;
	for(int i=0;i<2;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		y=calcy(a,b,c,d,e,f);
		x=calcx(a,b,c,y);
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}
float calcy(float a,float b,float c,float d,float e,float f){
	float y;
	b=b/a*-1;
	c=c/a;
	b=d*b;
	c=d*c;
	e=b+e;
	f=f-c;
	y=f/e;
	return y;
}
float calcx(float a,float b,float c,float y){
	float x;
	b=b*y;
	c=c-b;
	x=c/a;
	return x;
}