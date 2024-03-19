#include <stdio.h>

int main(){
  int setcount;
  double x1, y1, x2, y2, x3, y3, x4, y4;
  double r1, r2;
  int i;

  scanf("%d", &setcount);
  for(i=0; i<setcount; i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    r1=(y2-y1)*(x4-x3);
    r2=(y4-y3)*(x2-x1);
    if(r1==r2) printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}