#include<stdio.h>
#define MAX 2001
#define WHITE 0//未訪問
#define GRAY 1//訪問(未確定)
#define BLACK 2//最小値決定済み
#define NIL -1

/*
gcolor[];//color[v]にvへの訪問状態を色で記録
gmatrix[][];//gmatrix[u][v]にuからvへの重みを記録した隣接行列
weight[];//weight[v]にTに属する頂点とV-Tに属する頂点を繋ぐ辺の中で、重みが最小の辺の重みを記録する
parent[];//parent[v]にMSTにおける頂点vの親を記録
*/

int gmatrix[MAX][MAX];

int prim(int n){
  int i,v;
  int u;//頂点
  int minv;//最小の重み
  int weight[MAX];//Tに属する頂点と(V?T)に属する頂点を繋ぐ辺の中で、重みが最小の辺の重みを記録する
  int parent[MAX];//MSTにおける頂点vの親を記録する
  int color[MAX];//訪問状態を記録
  //初期化
  for(i=0; i<n ;++i){
    weight[i] = MAX;
    parent[i] = NIL;
    color[i] = WHITE;
  }
  //初回探索地点をindex0にする
  weight[0] = 0;

  while(1){
    minv = MAX;
    u = NIL;
    //隣接する地点で
    for(i=0; i<n ;++i){
      if(minv > weight[i] && color[i] != BLACK){
	//最小の重みを記録する
	u = i;
	minv = weight[i];
    }
    }
    //全て訪問した
    if(u == NIL) break;
    //訪問済み
    color[u] = BLACK;
    for(v=0; v<n ;++v){
      //uとvの間に辺が存在する
      if(color[v] != BLACK && gmatrix[u][v] != MAX ){
	if(weight[v] > gmatrix[u][v]){
	  //隣接する辺に重みを割り当てる
	  weight[v] = gmatrix[u][v];
	  parent[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  int sum = 0;
  for(i=0;i<n;i++){
    if(parent[i] != NIL) sum += gmatrix[i][parent[i]];
  }

  return sum;
}

int main(){
  int n,i,j;
  scanf("%d",&n);

  for(i=0;i<n;++i){
    for(j=0;j<n;++j){
      int edge;
      scanf("%d",&edge);
      if(edge == NIL) gmatrix[i][j] = MAX;
      else gmatrix[i][j] = edge;
    }
  }

  printf("%d\n",prim(n));

  return 0;
}


