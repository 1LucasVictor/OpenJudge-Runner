#include <stdio.h>
#include <math.h>
int main(){
  double x1,x2,x3,x4;
  double y1,y2,y3,y4;
  double dx1,dx2,dy1,dy2;
  int n;
  double epsilon=1.0e-10;
  scanf("%d",&n);
  while(n!=0){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    dx1=x2-x1;
    dy1=y2-y1;
    dx2=x4-x3;
    dy2=y4-y3;

    if(fabs(dx1*dy2-dx2*dy1)<epsilon)printf("YES\n");
    else printf("NO\n");
    n--;
  }
  return 0;
}