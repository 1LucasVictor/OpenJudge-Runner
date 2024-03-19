#include<stdio.h>
#include<float.h>
#include<math.h>
//#define DBL_EPSILN = 0.000001

int main(void){
  double x1,x2,x3,x4;
  double y1,y2,y3,y4;
  int k,n;
  scanf("%d",&n);
  for(k=1;k<=n;k++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    if(fabs(x1-x2) < DBL_EPSILON && fabs(x3-x4) < DBL_EPSILON) printf("YES\n");
    else if((fabs(x1-x2) < DBL_EPSILON && fabs(x3-x4) >= DBL_EPSILON) || fabs(x1-x2) >= DBL_EPSILON && fabs(x3-x4) < DBL_EPSILON) printf("NO\n");
    else{
      if(fabs((y2-y1)/(x2-x1) - (y4-y3)/(x4-x3)) < DBL_EPSILON) printf("YES\n");
      else printf("NO\n");
    }
  }
  return 0;
}