#include<stdio.h>
int main(){
double a,b,c,d,e,f,x,y;
while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
 y=(c*d-f*a)/(b*d-e*a);
 x=(b*f-c*e)/(b*d-e*a);
 printf("%.3f %.3f\n",x,y);
 }
return 0;}