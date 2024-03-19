#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,X,Y;
	double x=0,y=0;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		y=(c*d-f*a)/(b*d-e*a);
		x=(c*e-f*b)/(a*e-d*b);
		if(x>=0)
			x+=0.0005;
		else
			x-=0.0005;
		if(y>=0)	
			y+=0.0005;
		else
			y-=0.0005;
		X=x*1000;
		Y=y*1000;
		x=X/1000;
		y=Y/1000;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}