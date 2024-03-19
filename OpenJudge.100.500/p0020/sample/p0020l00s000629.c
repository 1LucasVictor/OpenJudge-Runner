#include <stdio.h>

int main(void){
  float x1,y1,x2,y2,x3,y3,x4,y4;
  double dm,dn;
  int i,n;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

    dm=(y2-y1)/(x2-x1);
    dn=(y4-y3)/(x4-x3);

    if(dm == dn){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}