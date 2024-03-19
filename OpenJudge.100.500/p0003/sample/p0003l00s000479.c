#include<stdio.h>
main(){
  double x,y,a,b,c,d,e,f;
  while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
    x=(b*f-e*c)/(b*d-e*a);
    y=(a*f-d*c)/(a*e-d*b);
    printf("%.3f %.3f\n",x,y);
  }
  return 0;
}