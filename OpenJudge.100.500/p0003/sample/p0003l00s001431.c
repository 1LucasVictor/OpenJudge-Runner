#include<stdio.h>

int main(){
 int a,b,c,d,e,f;
 double x,y,det;

 while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
  det=1/(double)(a*e-b*d);
  x=det*(double)(e*c-b*f);
  y=det*(double)(-d*c+a*f);
  printf("%.3f %.3f\n",x==0?0.0:x,y==0?0.0:y);
 }
 return 0;
}