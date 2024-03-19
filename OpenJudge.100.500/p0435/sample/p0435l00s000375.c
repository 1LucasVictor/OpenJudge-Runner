#include <stdio.h>
#include <math.h>

int main(){
  int n, d, i, count = 0;
  scanf("%d %d", &n, &d);
  int x[n], y[n];

  for(i = 0; i < n; i++){
    scanf("%d %d", &x[i], &y[i]);
    if(sqrtf(x[i]*x[i] + y[i]*y[i]) <= d)
      count++;
  }

  printf("%d\n", count);
  return 0;
}
