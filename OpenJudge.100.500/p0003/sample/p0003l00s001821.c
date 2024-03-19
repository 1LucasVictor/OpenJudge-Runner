#include<stdio.h>
main(){
  double a,b,c,d,e,f,x,y;
  double ansx,tmp,ansy;
  double a1,a2,a3,a4,a5,a6,x1,y1;
  while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){

  tmp=a,a1=a,a2=b,a3=c,a4=d,a5=e,a6=f;
  a*=d,b*=d,c*=d;
  d*=tmp,e*=tmp,f*=tmp;
  x=b-e;
  y=c-f;

  ansx=y/x+0.000499999999;

  tmp=a2;
  a1*=a5,a2*=a5,a3*=a5;
  a4*=tmp,a5*=tmp,a6*=tmp;
  x1=a1-a4;
  y1=a3-a6;

  ansy=y1/x1+0.000499999999;

  printf("%.3f %.3f\n",ansy,ansx);
  }
  return 0;
}