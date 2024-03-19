#include<stdio.h>
 
int main(){
  int a,b,c,d,e,f;
  float x,y;
  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=-1){
    x = (float)(c*e-b*f)/(a*e-d*b);
    y = (float)(c*d-a*f)/(b*d-a*e);
    printf("%.3f %.3f\n",x,y);
  }
  return 0;
}