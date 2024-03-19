#include <stdio.h>

int main(){
  int n, i;
  double x[4], y[4];
  scanf("%d", &n);
  while(n--){
    for(i = 0; i < 4; ++i) scanf("%lf%lf", x + i, y + i);
    if(((y[1] - y[0]) / (x[1] - x[0])) == ((y[3] - y[2]) / (x[3] - x[2]))) puts("YES");
    else puts("NO");
  }
  return 0;
}