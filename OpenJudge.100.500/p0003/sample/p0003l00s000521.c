#include <stdio.h>

int main(){
  float a, b, c, d, e, f;
  while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF){
    float i = a / d;
    float y = (c-f*i)/(b-e*i);
    float x = (c-b*y)/a;
    printf("%.3f %.3f\n", x, y);
  }
  return 0;
}