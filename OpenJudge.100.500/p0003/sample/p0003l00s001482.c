#include<stdio.h>
#include<math.h>

double a1,b1,c1,a2,b2,c2,delta,x,y;

int main(){
while(scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2) != EOF){
  delta = a1*b2 - b1*a2;
  x = (c1*b2 -b1*c2)/delta;
  y = (a1*c2 - a2*c1)/delta;
  x = floor(1000*x+0.5)/1000;
  y = floor(1000*y+0.5)/1000;
 printf("%.3lf %.3lf",x,y);
 }
  return 0;
}