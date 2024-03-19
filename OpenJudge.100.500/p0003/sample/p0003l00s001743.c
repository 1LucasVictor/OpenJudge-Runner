#include <stdio.h>

int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
	
	double x = (double)(c*e-b*f)/(a*e-b*d);
	double y = (double)(c*d-f*a)/(b*d-a*e);
	
	//it is very important of this below  to anser collectly  
    if(x == -0.000){
      x = 0.000;
    }
    if(y == -0.000){
      y = 0.000;
    }
	
	printf("%.3lf %.3lf\n",x,y);
	
	}
	
	return 0;
}