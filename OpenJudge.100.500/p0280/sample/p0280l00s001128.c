// Minimun Spanning Tree
#include <stdio.h>

#define INF 999999999
#define NIL -1
#define MAX 100

// 以下の3色でvの訪問状態を示す
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n;           // Gの頂点の数
int color[MAX];  // 訪問状態を記録する
int G[MAX][MAX]; // 隣接行列
int d[MAX];      // 重みが最小の辺の重みを記録する
int p[MAX];      // MSTにおける頂点vの親を記録する

// プリムのアルゴリズムを実施 //
void prim(){
  int i, u, mincost, sum=0;
  
  // 初期化 //
  for(i=0; i < n; i++){
    d[i] = INF;
    p[i] = NIL;
    color[i] = WHITE;
  }
  d[0] = 0;
  //p[0] = NIL;
  color[0] = GRAY;
  while(1){
    mincost = INF;
    // 候補を探し、確定していく //
    for(i=0; i < n; i++){
      // MSTのルートとしてMSTの集合として追加するための重みが最小である頂点iを探す //
      if(color[i] != BLACK && d[i] < mincost){
        mincost = d[i];
        u = i;
      }
    }
    if(mincost == INF) break; // colorがすべてBLACKのとき(すべて確定したとき)

    color[u] = BLACK; // 親を確定する(候補を確定していく)

    for(i=0; i < n; i++){
      // 重みが最小のものに更新する //
      if(color[i] != BLACK && G[u][i] != NIL){
        if(d[i] > G[u][i]){  // ここ注意!!
          d[i] = G[u][i];
          p[i] = u;
          color[i] = GRAY;
        }
      }
    }
  }
  for(i=0; i < n; i++){
    sum += d[i];
  }
  printf("%d\n", sum);
}

int main(){
  int i, j;

  scanf("%d", &n);

  for(i=0; i < n; i++){
    for(j=0; j < n; j++){
      scanf("%d", &G[i][j]);
    }
  }
  
  prim();
  
  return 0;
}
