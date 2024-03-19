#include <stdio.h>

#define N 101
#define INF 150000

int main(){
  int i, j, min, x, y, z, n;
  int M[N][N];
  int color[N], d[N];

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    color[i] = 0;
    d[i] = INF;
    for(j = 0; j < n; j++){
      M[i][j] = -1;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d %d", &x, &y);
    for(j = 0; j < y; j++){
      scanf("%d", &z);
      scanf("%d", &M[x][z]);
    }
  }

  d[0] = 0;

  while(1){
    min = INF;
    for(i = 0; i < n; i++){
      if(color[i] != 1 && d[i] < min){
        min = d[i];
        x = i;
      }
    }

    if(min == INF)
      break;

    for(i = 0; i < n; i++){
      if(M[x][i] != -1 && color[i] != 1 && d[x] + M[x][i] < d[i])
        d[i] = d[x] + M[x][i];
    }

    color[x] = 1;

  }

  for(i = 0; i < n; i++)
    printf("%d %d\n", i, d[i]);

  return 0;
}