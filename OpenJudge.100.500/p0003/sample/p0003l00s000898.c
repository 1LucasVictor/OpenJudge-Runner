#include<stdio.h>

int main(void){
  double a,b,c,d,e,f;
  double x,y;

  while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
    y=(c*d-a*f)/(b*d-e*a);
    if(d==0)
      x=(c-(b*y))/a;
    else
      x=(f-(e*y))/d;
    printf("%.3f %.3f\n",x,y);
  }
  return(0);
}