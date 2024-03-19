#include<stdio.h>
 
int main(void){
  int n;
  double x1, x2, x3, x4, y1, y2, y3, y4, s, t;
 
  scanf("%d",&n);
 
  while(n > 0){
    n--;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

    s = (y2-y1)/(x2-x1);
    t = (y4-y3)/(x4-x3);

    if(s == t)printf("YES\n");
    else printf("NO\n");

  }
}
