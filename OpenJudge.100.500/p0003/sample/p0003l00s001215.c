#include<stdio.h>
int main(void)
{
  double a,b,c,d,e,f;
  double x1,y1;
  int x2,y2;

  while(scanf("%lf %lf %lf %lf %lf %lf", &a,&b,&c,&d,&e,&f)!=EOF){
    x1=(c*e-b*f)/(a*e-b*d);
    y1=(c*d-a*f)/(b*d-a*e);
    x2=x1*10000;
    y2=y1*10000;
    if(x2%10>=5)
      x2=x2-x2%10+10;
    x1=x2/10000;
    if(y2%10>=5)
      y2=y2-y2%10+10;
    y1=y2/10000;
    printf("%.3f %.3f\n",x1,y1);
  }
  return 0;
}