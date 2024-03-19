#include <stdio.h>
 
double xxx(double a, double b, double c, double d, double e, double f){
 
  double x;

if(b!=1.000){

a=a/b;
c=c/b;
b=1.000;
}
 
a=a*e;
b=b*e;
c=c*e;
 
a=a-d;
b=b-e;
c=c-f;

 x=c/a;

 
 if((int)(x*10000)%10>=5)
   x=x+0.001; 
 
return x;
 
}
 
double yyy(double a, double b, double c, double d, double e, double f){
 
  double y;

if(a!=1.000){

b=b/a;
c=c/a;
a=1.000;
}
 
a=a*d;
b=b*d;
c=c*d;
 
a=a-d;
b=b-e;
c=c-f;

 y=c/b;

 if((int)(y*10000)%10>=5)
   y=y+0.001; 
 
 return y;
 
}
 
 
int main(void){
 
double a, b, c, d, e, f;
 
while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f)!=-1){
 
printf("%.3f %.3f\n", xxx(a, b, c, d, e, f), yyy(a, b, c, d, e, f));
 
}
 
return 0;
}