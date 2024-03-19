#include <stdio.h>

void syori1(double a,double b,double c,double d,double e,double f,double *x,double *y){		/*x + y= (ªÓ½Â) Ìûö®ðð­B*/
	*x=( c*(e/b)-f )/( a*(e/b)-d ) + 0.0;
	*y=( (c-a*(*x))/b ) + 0.0;
}

int syori2(double n){	/*	¬_æ4ÊðlÌÜü	yg¢ûzn+=syori2(n) */
	n*=1000;
	n = n - (double)(int)n;
	if(n>=0.5){
		return (0.001);
	}else{
		return 0;
	}
}

int main(){
	double	a,b,c,d,e,f,
			x,y;
	
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		syori1(a,b,c,d,e,f,&x,&y);
		
		x+=syori2(x);
		y+=syori2(y);
		
		printf("%.3lf %.3lf\n",x,y);
	}
	
	return 0;
}