#include<stdio.h>

main(){
  double a,b,c,d,e,f;

  while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
  double x,y;
  y=((d*c)-(a*f))/((b*d)-(a*e));
  x=(c-b*y)/a;

  y+=0.00005;
  x+=0.00005;  
  
  printf("%0.3lf %0.3lf\n",x,y);

  }
  return 0;
}