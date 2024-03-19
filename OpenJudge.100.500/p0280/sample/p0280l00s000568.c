#include <stdio.h>
#define N 102

int main(){
  int gin[N][N], d[N];
  int n, i, j, x, y;

  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      scanf("%d", &gin[i][j]);
    }
  }
  
  d[0] = 0;
  for(i = 1; i <= n; i++) d[i] = 2001;

  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if(gin[i][j] != -1){
	if(gin[i][j] < d[i]){
	  d[i] = gin[i][j];
	  x = i;
	  y = j;
	}
      }
    }
    gin[x][y] = 0;
    gin[y][x] = 0;
  }

  for(i = 1; i <= n; i++) d[0] += d[i];
  printf("%d\n", d[0]);

  return 0;
}