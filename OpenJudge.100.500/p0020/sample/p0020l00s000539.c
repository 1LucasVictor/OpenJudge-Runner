#include <stdio.h>

int main(void){
  double x1, x2, x3, x4, y1, y2, y3, y4;
  double a, b;
  int i, n;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    a = (y1 - y2) / (x1 - x2);
    b = (y3 - y4) / (x3 - x4);

    if(a == b){
      printf("YES\n");
    }else {
      printf("NO\n");
    }
  }

  return 0;

}