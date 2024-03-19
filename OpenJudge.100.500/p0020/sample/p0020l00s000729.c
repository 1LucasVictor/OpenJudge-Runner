#include <stdio.h>

int main(void)
{
  int n,i;
  double x1,y1,x2,y2,x3,y3,x4,y4;
  int ans[100];
  
  scanf("%d", &n);
  for(i = 0;i < n;i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
  
    if( (x2-x1)*(y4-y3)-(x4-x3)*(y2-y1) == 0){
      ans[i] = 1;
    }else{
      ans[i] = 0;
    }
  }

  for(i = 0;i < n;i++){
    if(ans[i] == 1){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}