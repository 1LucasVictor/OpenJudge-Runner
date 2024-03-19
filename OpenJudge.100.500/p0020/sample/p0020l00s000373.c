#include <stdio.h>
#include <math.h>
#define delta 0.0000001
int main(void){
  double d[20];
  int n,i,j;
  double xd1,xd2,yd1,yd2;
  scanf("%d",&n);
  for (i=0;i<n;i++){
    for(j=0;j<8;j++){
      scanf("%lf",&d[j]);
    }
    xd1 = d[0]-d[2];
    xd2 = d[4]-d[6];
    yd1 = d[1]-d[3];
    yd2 = d[5]-d[7];
    if (fabs(xd1)<delta && fabs(xd2)<delta){
      printf("YES\n");
    } else if(fabs(xd1)>delta && fabs(xd2)>delta){
        if (fabs(yd1/xd1-yd2/xd2)<delta) {
          printf("YES\n");
        } else {
          printf("NO\n");
        }
    }else{
      printf("NO\n");
    }
  }
  return 0;
}