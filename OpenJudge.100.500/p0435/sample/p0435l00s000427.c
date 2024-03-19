#include <math.h>
#include <stdio.h>

double dist (double x, double y);

double dist (double x, double y){
  return sqrt(x*x+y*y);
}
int main(void){
  int n;
  int a;
  double x, y;
  int sum=0;
  int i;
  scanf("%d", &n); scanf("%d", &a);
  for (i=1;i<=n;i++){
    scanf("%lf", &x);
    scanf("%lf", &y);
    if (dist(x,y) <= a){
      sum++;
    }
    }
  printf("%d", sum);
  return 0;
}
  
