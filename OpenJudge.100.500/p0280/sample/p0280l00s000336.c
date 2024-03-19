#include <stdio.h>
#define MAX 100
#define INF 100000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX];
//M：隣接行列

int prim(){
  int u, min, sum = 0;
  int d[MAX], p[MAX], color[MAX];
  //d：重みが最小の変の記録, p：MSTにおける最小の親の記録
  //color：訪問状態の記録
  int i, j;

  //初期化
  for(i = 0; i < n; i++){
    d[i] = INF;
    p[i] =  -1;
    color[i] = WHITE;
  }
  d[0] = 0;

  while(1){
    min = INF;
    u = -1;

    //最小経路の保存
    for(i = 0; i < n; i++){
      if(min > d[i] && color[i] != BLACK){
        u = i;
        min = d[i];
      }
    }

    if(u == -1) break;
    color[u] = BLACK;

    for(j = 0; j < n; j++){
      if(color[j] != BLACK && M[u][j] != INF){
        if(d[j] > M[u][j]){
          d[j] = M[u][j];
          p[j] = u;
          color[j] = GRAY;
        }
      }
    }
  }
  for(i = 0; i < n; i++){
    if(p[i] != -1){
      sum += M[i][p[i]];
    }
  }

  return sum;
}

int main(){
  int i, j, ans;

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&M[i][j]);
      if(M[i][j] == -1) M[i][j] = INF;
    }
  }

  ans = prim();
  printf("%d\n",ans);

  return 0;
}

