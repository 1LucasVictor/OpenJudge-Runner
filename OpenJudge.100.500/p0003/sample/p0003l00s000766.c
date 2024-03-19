#include <stdio.h>

int main(){
  float a,b,c,d,e,f;

  while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f) != EOF){
  float x = (c*e-b*f)/(a*e-b*d);
  float y = (a*f-c*d)/(a*e-b*d);

  printf("%.3f %.3f\n",x,y);
  }

  return 0;
  
}