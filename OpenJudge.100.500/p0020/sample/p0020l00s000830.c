#include <stdio.h>

int main(){
  double x1,y1,x2,y2,x3,y3,x4,y4;
  double m1,m2;
  int x, i;
  scanf("%d", &x);
  for(i= 0; i < x;i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y4-y3)/(x4-x3);
    if(m1 == m2){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}