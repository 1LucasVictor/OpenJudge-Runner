#include <stdio.h>

int main(void){
  int n, i;
  double x1, y1, x2, y2, x3, y3, x4, y4, k1, k2;
  scanf("%d", &n);
  for(i = 0; i < n; i ++){
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    if(x2 - x1 == 0 && x3 - x4 == 0){
      printf("YES\n");
      continue;
    }
    else if(x2 - x1 == 0|| x3 - x4 == 0){
      printf("NO\n");
      continue;
    }
    k1 = (y2 - y1) / (x2 - x1);
    k2 = (y4 - y3) / (x4 - x3);
    if(k1 == k2){
      if((y3 - y1) - k1*(x3 - x1) == 0)
	printf("NO\n");
      else
      printf("YES\n");
    }
    else
      printf("NO\n");
  }
  return 0;
}