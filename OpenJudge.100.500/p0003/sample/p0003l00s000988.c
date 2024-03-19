#include<stdio.h>
int main(){
  double a,b,c,d,e,f;
  while(scanf("%lf %lf %lf %lf %lf %lf",
	      &a,&b,&c,&d,&e,&f)!=EOF){
    double x,y;
    x=(c*e-b*f)/(a*e-b*d);
    y=(a*f-c*d)/(a*e-b*d);
    // printf("%.3f\n",0.0004);
    printf("%.3f %.3f\n",x,y);
  }
  return 0;
}
	