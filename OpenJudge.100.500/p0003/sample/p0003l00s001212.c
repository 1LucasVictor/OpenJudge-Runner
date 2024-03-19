#include<stdio.h>
#include<math.h>
double det(double a,double b,double c,double d);
int main(){
double a,b,c,d,e,f;
 while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
 printf("%.3lf %.3lf\n",round(1000*det(c,f,b,e)/det(a,d,b,e))/1000.0,round(1000*det(a,d,c,f)/det(a,d,b,e))/1000.0);
 }
return 0;
}
double det(double a,double b,double c,double d){
double determinant;
determinant=a*d-b*c;
return determinant;
}