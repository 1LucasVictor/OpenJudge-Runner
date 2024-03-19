#include <stdio.h>

int main(void){
  int i, j, n;
  float d[4], x[4], y[4];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < 4; j++){
      scanf("%f%f", &x[j], &y[j]);
    }
    d[0] = x[1]-x[0];
    d[1] = y[1]-y[0];
    d[2] = x[3]-x[2];
    d[3] = y[3]-y[2];
    if(d[0]*d[3] == d[1]*d[2]){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}