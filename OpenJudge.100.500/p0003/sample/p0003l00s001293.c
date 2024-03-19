#include <stdio.h>
int main(){
  int a,b,c,d,e,f;
  int i,j;
  double x,y;
  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
    
    x=(e*c-b*f)/(a*e-b*d);
    y=(d*c-a*f)/(b*d-a*e);
    printf("%.3f %.3f\n",x,y);
  }
  return 0;
}