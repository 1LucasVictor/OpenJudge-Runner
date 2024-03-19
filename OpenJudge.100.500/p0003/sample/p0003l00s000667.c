#include<stdio.h>

int main(void){
	
	int a,b,c,d,e,f,num1,num2,num3;
	double x,y,num4,num5;
	while(scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f)!=EOF){
		num1=a*d;
		num2=num1/a;
		num3=num1/d;
		if(num2!=1){
			b*=num2;
			c*=num2;
		}
		if(num3!=1){
			e*=num3;
			f*=num3;
		}
		num4=b-e;
		num5=c-f;
		y=(double)num5/(double)num4;
		x=((double)(c/num2)-(b/num2)*y)/(double)a;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}