#include<stdio.h>
#include<math.h>
int main(){
  double x1,y1,x2,y2,x3,y3,x4,y4,a,b;
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
	  &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    if(fabs(x1-x2)<0.00001&&fabs(x3-x4)<0.00001)printf("YES\n");
    else{
      a=(y1-y2)/(x1-x2);
      b=(y3-y4)/(x3-x4);
      if(fabs(a-b)<0.00001)printf("YES\n");
      else printf("NO\n");
    }
  }
  return 0;
}