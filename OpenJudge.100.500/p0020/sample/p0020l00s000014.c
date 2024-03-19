#include <stdio.h>

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
    if (xd1==0 && xd2==0){
      printf("YES\n");
    } else if(xd1!=0 && xd2!=0){
        if (yd1/xd1==yd2/xd2) {
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