#include <stdio.h>
#include <math.h>
double round_d(double x) {
  if ( x > 0.0 ) {
    return floor(x + 0.5);
  } else {
    return -1.0 * floor(fabs(x) + 0.5);
  }
}
int main(void){
  int a,b,c,d,e,f;
  while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f)!=EOF) {
    double x = 1000*(c*e-b*f)/(a*e-b*d);
    double y = 1000*(a*f-c*d)/(a*e-d*b);

    printf("%.3lf %.3lf\n",round_d(x)/1000,round_d(y)/1000);
  }
  return 0;
}