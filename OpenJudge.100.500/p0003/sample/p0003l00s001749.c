#include<stdio.h>
int main(){
  double a,b,c,d,e,f,x,y,wari,sa,wasa;
  while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
    wari=(d/a);
    a=(a*wari);
    b=(b*wari);
    c=(c*wari);
    sa=b-e;
    wasa=c-f;
    y=(wasa/sa);
    x=(f-(e*y))/d; 
    printf("%.3f %.3f\n", x, y);
  }
  return(0);
}