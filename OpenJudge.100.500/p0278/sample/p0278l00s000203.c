#include<stdio.h>

#define INF 10000

int dep[101],f[101],g[101][101],n;
int queue[101],ind=0;
int t = 1 ;



void bfs(int i){ 

  int l;
  
  for(l = 1 ; l <= n ; l++){
    if(g[i][l] == 1){
      dep[l] = dep[i] + 1;
    }
  }




}

int main(void){
  
  int i,j,u,k,x;


  scanf("%d",&n);

  // 初期化
  for(i = 1 ; i <= n ; i++){
    dep[i] = INF;
    f[i] = 0; 
    for(j = 1 ; j <= n ; j++ ){
      g[i][j] = 0;
    }
  }

  dep[1] = 0;

  // 入力
  for(i = 0 ; i < n ; i++){
    scanf("%d%d",&u,&k);
    for(j = 0 ; j < k ; j++ ){
      scanf("%d",&x);
      g[u][x] = 1;
    }
  }
  

  // 幅優先探索
  
  queue[ind++] = 1;

  while(ind > 0){
    int u = queue[--ind];
    
    for(i = 1; i <= n ; i++){
      if(g[u][i] == 1 && dep[i] == INF){
	dep[i] = dep[u] + 1;
	queue[ind++] = i;
      }
    }
  }
  
  
  
  // 出力

  for(i = 1; i <= n ; i++){
    if(dep[i] == INF) dep[i] = -1;
    printf("%d %d\n",i,dep[i]);
  }
  
  return 0;
}