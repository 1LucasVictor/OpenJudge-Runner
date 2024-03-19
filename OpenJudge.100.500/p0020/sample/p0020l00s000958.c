#include <stdio.h>

int main(void)
{
  double x[4], y[4];
  double a1, a2;
  int ds;
  int i;

  scanf("%d", &ds);

  for(i = 0; i < ds; i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]);
    a1 = (y[0] - y[1]) / (x[0] - x[1]);
    a2 = (y[2] - y[3]) / (x[2] - x[3]);
    if(a1 == a2){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}