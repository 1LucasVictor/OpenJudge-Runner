#include<stdio.h>
int main(void){
  double a,b,c,d,e,f,x,y;
  while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
    x = (e*c-b*f)/(e*a-b*d);
    y = (f*a-c*d)/(e*a-b*d);
    printf("%.3lf %.3lf\n",x,y);
  }
  return 0;
}