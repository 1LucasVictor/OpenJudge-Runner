#include <stdio.h>

int main(void){
  double a,b,c,d,e,f;
  double x,y;

  double g;

  while( scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f )!=EOF ){
    g = a*e-b*d;
    x = e*c-b*f;
    y =-d*c+a*f;
    x = x/g;
    y = y/g;
    printf("%.3lf %.3lf\n",x,y);
  }
  return 0;
}