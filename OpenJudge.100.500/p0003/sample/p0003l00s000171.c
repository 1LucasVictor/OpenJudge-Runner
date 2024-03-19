#include<stdio.h>
#include<math.h>

int main(void){

double a,b,c,d,e,f,x,y;
while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){

x=(b*f-e*c)/(b*d-e*a);
y=c/b-a/b*x;

printf("%.3lf %.3lf\n",x,y);
}
return(0);
}