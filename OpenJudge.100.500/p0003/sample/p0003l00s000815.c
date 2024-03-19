#include<stdio.h>

int main(){
	double a,b,c,d,e,f,x,y;

	while(~scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)){
		
		x=(e*c-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
		if(x==0){
			if(y==0){
				printf("0.000 0.000\n");
			}else{
				printf("0.000 %.3lf\n",y);
			}
		continue;
		}

		if(y==0){
			printf("%.3f 0.000\n",x);
			continue;
		}
		printf("%.3lf %.3lf\n",x,y);

	}



	return 0;
}