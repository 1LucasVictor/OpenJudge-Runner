#include <stdio.h>

int main(){
  int n, i, count = 0;
  double d;
  scanf("%d %lf", &n, &d);
  double x[n], y[n];

  for(i = 0; i < n; i++){
    scanf("%lf %lf", &x[i], &y[i]);
    if(x[i]*x[i] + y[i]*y[i] <= d*d){
      count++;
    }
  }

  printf("%d\n", count);
  return 0;
}