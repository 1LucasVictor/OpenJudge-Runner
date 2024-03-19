#include <stdio.h>
#include <stdlib.h>
#define WHITE -1
#define GRAY 0
#define BLACK 1
#define INF 1000000
#define NIL -1

void dijkstra(void);

int n,G[100][100];

int main()
{
int i,id,k,v,c,j;

  scanf("%d",&n);
  if(n<1 || n>100) exit(1);

  for(i=0;i<n;i++){ //辺が入力されていないところをINFにするための処理
    for(j=0;j<n;j++){
      G[i][j] = INF;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&id,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      G[id][v] = c;
    }
  }

  dijkstra();
  
  return 0;
}

void dijkstra()
{
  int i,mincost,u,v;
  int d[100],color[100]; //d[]=重みが最小の辺の重みの記録、color[]=色

  for(i=0;i<n;i++){
    d[i] = INF; //辺なし(INF)に設定
    color[i] = WHITE; 
  }

  d[0] = 0; //始点
  color[0] = GRAY;

  while(1){
    mincost = INF; //breakの判定
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < mincost){ //訪問してないかつ、mincost(記録しているコスト)より新たなコストが小さかったら
	mincost = d[i]; //それを記録
	u = i; ///訪問したことを判断するため
      }
    }
    if(mincost == INF) break; //forループを回していなかったらbreak
    color[u] = BLACK; //訪問完了
    
    for(v=0;v<n;v++){
      if(color[v] != BLACK && d[u]+G[u][v] < d[v]){ //訪問してないかつ、uとvの間に辺があってその経路が記録している重みよりも小さかったら
        d[v] = d[u] + G[u][v]; //小さい方を記録
	color[v] = GRAY; //灰色に設定
      }
    }
  }
  
  for(i=0;i<n;i++){ //出力
    printf("%d ",i);
    if(d[i] == INF) printf("%d\n",-1);
    else printf("%d\n",d[i]);
  }
}

