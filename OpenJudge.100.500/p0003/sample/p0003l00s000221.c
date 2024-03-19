#include<stdio.h>
#include<math.h>
int main(){
 int a,b,c,d,e,f,det;
 double x,y;
 while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF){
  det=a*e-b*d;
  x=(double)(e*c-b*f)/det;
  y=(double)(-d*c+a*f)/det;
  printf("%.3f %.3f\n",x==0?fabs(x):x,y==0?fabs(y):y);
 }
 return 0;
}