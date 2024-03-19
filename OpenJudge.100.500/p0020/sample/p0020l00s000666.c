#include <stdio.h>

int main(void){
  int i, j, n;
  double dx[2], dy[2], x[4], y[4];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < 4; j++){
      scanf("%lf%lf", &x[j], &y[j]);
    }
    dx[0] = x[1] - x[0];
    dx[1] = x[3] - x[2];
    dy[0] = y[1] - y[0];
    dy[1] = y[3] - y[2];
    if(dx[0] == 0 || dx[1] == 0){
      if(dx[0] == 0 && dx[1] == 0){
	printf("YES\n");
      }
    }else if(dy[0]/dx[0] == dy[1]/dx[1]){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}