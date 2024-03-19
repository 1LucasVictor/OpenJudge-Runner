#include <stdio.h>
main(){
  double a,b,c,d,e,f,i;
  double x,y;
    while(~scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)){
      x=(b*f-e*c)/(b*d-a*e);
      y=(a*f-d*c)/(a*e-d*b);
      if(x==-0.000){
	x=0;
      }
      else if(y==-0.000){
	y=0;
      }
      printf("%.3f%.3f\n",x,y);
    }
    return 0;
}