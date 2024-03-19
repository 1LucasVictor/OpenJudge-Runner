#include<stdio.h>
#define MAX 100
#define INF (1<<21)//j＼左シフトして値を大きくする
#define WHITE 0
#define GLAY 1
#define BLACK 2
#define NIL -1

int n,M[MAX][MAX];//隣接行列重みつく
int prim(){
  int u,mincost;
  int d[MAX],p[MAX],color[MAX];//dは最短距離ほじM[i][j]を入れる　　別からの辺のが短ければこうしん
  int i,v;
  int sum=0;
  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=NIL;//親なし最短はinf
    color[i]=WHITE;
  }
  d[0]=0;
  while(1){
    mincost=INF;
    u=NIL;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK&&d[i]<mincost){
        mincost=d[i];
        u=i;//最小距離を決定　閉路の場合は他の時み隣接していてdが保存してある最短から選ぶ
      }
    }

    if(mincost == INF)break;

    color[u]=BLACK;//uをTの頂点に追加
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && M[u][v]!=INF){//uからvへ辺が追加
        if(M[u][v]<d[v]){//今までのより今回のへんのが短ければ
          d[v]=M[u][v];
          p[v]=u;//親設定
          color[v]=GLAY;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1){
      sum+=M[i][p[i]];
    }
  }
  return sum;
}

int main(){
  int i,j,weight;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&weight);
      if(weight==-1)M[i][j]=INF;
      else M[i][j]=weight;
    }
  }
  printf("%d\n",prim());
  return 0;
}

