#include<stdio.h>
int main(){
double a,b,c,d,e,f,x,y;
while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
x=(c*e-f*b)/(a*e-d*b);
y=(c*d-f*a)/(b*d-e*a);
if((int)x==0)x=0;
if((int)y==0)y=0;
printf("%.3f %.3f\n",x,y);
}
}