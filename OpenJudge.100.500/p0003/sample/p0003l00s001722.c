#include<stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y,num;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){    
		num = a * e - b * d;
		if(num != 0){
            x = (e * c - b * f) / num;
			y = (a * f - d * c) / num;
		}
		if(x==-0){
			x=0;
		}
		else if(y==-0){
			y=0;
		}    
		printf("%.3lf  %.3lf\n",x,y);
	}
	return 0;
}