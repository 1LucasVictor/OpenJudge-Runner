#include<stdio.h>
#define N 100
#define INF 99999999
#define WHITE 0
#define BLACK 2
#define GRAY 1
void prim(int n,int A[N][N]){
  
  int i,p[N],mincost,cost[N],color[N],k,ver;

  for(i=0;i<n;i++){
    cost[i] = INF;
    color[i] = WHITE;
  } //初期化
  cost[0] = 0;
 
 p[0] = -1;
  while(1){
   
    mincost = INF;
    for(i=0;i<n;i++){
        if(color[i] != BLACK && cost[i] < mincost){
      
      mincost = cost[i];
   
      ver = i; 
      }
    }

  
    
  
    if(mincost == INF)break; 
  
  
  color[ver] = BLACK;

  for(k=0;k<n;k++){
    if(color[k] != BLACK && A[ver][k]!=INF){
      if(cost[ver]+A[ver][k] < cost[k]){
          cost[k] = A[ver][k] + cost[ver];
          p[k] = ver;
          color[k] = GRAY;
      }
        
    }
      
  }
  }
    
   for(i=0;i<n;i++) printf("%d %d\n",i,(cost[i]==INF ? -1: cost[i]));
}




int main(){

  int i,j,n,A[N][N],v,u,k;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
         A[i][j] = INF; //ここで全て辺無しにしておく
    }
  }
  
  for(i=0;i<n;i++){
      scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
        scanf("%d",&v);
      scanf("%d",&A[u][v]);//ここで編の番号を入力。ないなら－１を入力
    
    }
  }

  prim(n,A);

  return 0;
}

