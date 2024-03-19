#include <stdio.h>
#define max 100
#define INF 2147483647
#define nil -1
#define true 1
#define white 2
#define gray 3
#define black 4
typedef struct{
  int degree; //出次数を表す。
  int Adj[max]; //隣接リスト(隣接する頂点の番号のリスト)。
  int color;
  int d; //Tに属する頂点とV-Tに属する頂点をつなぐ辺の中で重みが最小の辺の重みを記録。
  int pi; //MST(最小全域木)におけるそれぞれのnodeの親を表す。
} node;
int prim(node *, int);
int n, A[max][max];

int main()
{
  //最小全域木のプログラム
  int i, j, k = 0;
  node node[max];
  
  for(i = 0 ; i < max ; i++) node[i].degree = 0;
  
  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      scanf("%d",&A[i][j]); 
      if(A[i][j] != -1){
	node[i].degree++;
	node[i].Adj[k] = j;
	k++; }
    }
    k = 0;
  }
  
  printf("%d\n",prim(node, 0));

  return 0;
}

int prim(node *node, int r)
{
  int i, u, mincost, sum = 0;

  for(i = 0 ; i < n ; i++){ 
    node[i].d = INF;
    node[i].pi = nil;
    node[i].color = white; }

  node[r].d = 0;

  while(true){
    mincost = INF;
    for(i = 0 ; i < n ; i++){
      if(node[i].color != black && node[i].d < mincost){
	mincost = node[i].d;
	u = i; }
    }
    if(mincost == INF) break;
    node[u].color = black;
    for(i = 0 ; i < node[u].degree ; i++){
      if(node[node[u].Adj[i]].color != black && A[u][node[u].Adj[i]] < node[node[u].Adj[i]].d){
	node[node[u].Adj[i]].pi = u;
	node[node[u].Adj[i]].d = A[u][node[u].Adj[i]];
	node[node[u].Adj[i]].color = gray; }
    }
  }

  for(i = 0 ; i < n ; i++){
    if(node[i].pi != nil) sum += A[node[i].pi][i]; }
  
  return sum;
}
