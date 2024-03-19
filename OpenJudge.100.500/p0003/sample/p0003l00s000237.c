#include <stdio.h>
#include <math.h>

int main(void){
  double a,b,c,d,e,f,x,y;

  while(EOF!=scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f) ){
    y = (c-f*(a/d)) / (b-e*(a/d));
    x = (c - b*y)/a;

//四捨五入

    printf("%.3f %.3f\n", x, y);
  }

  return 0;
}