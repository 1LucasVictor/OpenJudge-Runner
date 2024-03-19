#include<stdio.h>
#define MAX 100
#define INF 2001
#define WHITE 0
#define BLACK 1
#define GRAY 2

int MST(int);

int m[MAX][MAX]; //m[u][v]にuからvへの辺の重みを記録

int main(){
  int n, x;
  int i, j;

  scanf("%d", &n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d", &x);
      if(x == -1) m[i][j] = INF;
      else m[i][j] = x;
    }
  }

  printf("%d\n", MST(n));

  return 0;
}

int MST(int n){
  int color[n]; //color[v]にvの状態を記録
  int d[n]; //MSTに属する頂点と属さない頂点をつなぐ辺の最小の重み
  int p[n]; //p[v]にvの親を記録
  int min, ans = 0;
  int u; //MSTに新たに加える頂点
  int i, v;

  //初期化
  for(i=0;i<n;i++){
    color[i] = WHITE;
    d[i] = INF;
  }
  d[0] = 0;
  p[0] = -1; //始点は親なし

  while(1){
    min = INF; //重みの最小値を十分大きな値に設定
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < min){
	min = d[i];
	u = i;
      }
    }

    if(min == INF) break;

    color[u] = BLACK;

    for(v=0;v<n;v++){
      if(color[v] != BLACK && m[u][v] != INF){
	if(m[u][v] < d[v]){
	  d[v] = m[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }

  for(i=0;i<n;i++) ans += d[i];

  return ans;
}

