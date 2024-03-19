#include<stdio.h>
main(){
  double a,b,c,d,e,f,x,y;
  int xx,yy;
  while (scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
  x=(c*e-f*b)/(a*e-d*b);
  y=(a*f-d*c)/(a*e-d*b);
  xx=x*10000;
  yy=y*10000;
  xx=xx%10;
  yy=yy%10;
  if(xx>=5){
    x=x+0.001;
  }
  if(yy>=5){
    y=y+0.001;
  }
  printf("%.3f %.3f\n",x+0,y);
  }
  return 0;
}