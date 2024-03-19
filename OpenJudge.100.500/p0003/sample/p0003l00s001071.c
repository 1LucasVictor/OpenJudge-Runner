#include<stdio.h>
float calcy(float,float,float,float,float,float);
float calcx(float,float,float,float);
int main(void)
{
	int a,b,c,d,e,f;
	float x1,y1,x2,y2;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	y1=calcy(a,b,c,d,e,f);
	x1=calcx(a,b,c,y1);
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	y2=calcy(a,b,c,d,e,f);
	x2=calcx(a,b,c,y2);
	printf("%.3lf %.3lf\n%.3lf %.3lf\n",x1,y1,x2,y2);
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