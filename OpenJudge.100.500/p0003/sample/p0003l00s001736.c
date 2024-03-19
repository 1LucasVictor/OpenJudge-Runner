#include<stdio.h>
int main(void){
  double x,y,a,b,c,d,e,f;
  while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
    x=(f-c*e/b)/(d-a*e/b);
    y=(f-c*d/a)/(e-b*d/a);
x+=0.0004;
y+=0.0004;
    printf("%0.3f %0.3f",x,y);
  }
  return 0;
}