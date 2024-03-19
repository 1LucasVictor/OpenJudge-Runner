#include <stdio.h>
#define MAX 100
#define INF (1<<22)

int G[MAX][MAX];
void SSSP(int);

int main(){
  int n,i,j,id,k,c,v;

  scanf("%d",&n);
  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      G[i][j] = INF;
    }
  }
  for(i = 0;i < n;i++){
    scanf("%d%d",&id,&k);
    for(j = 0;j < k;j++){
      scanf("%d%d",&v,&c);
      G[id][v] = c;
    }
  }
  /* //sita iranai kamo
  for(i = 0;i < k;i++) {
    for(j = 0;j < k;j++) {
      if(G[i][j] == 0) G[i][j] = INF;
    }
  }
  //*/
  SSSP(n);

  return 0;
}

void SSSP(int n){
  int i,j,hen,min,color[MAX],parent[MAX],weight[MAX];
  
  for(i = 0;i < n;i++){
    color[i] = 0;
    //  parent[i] = -1;
    weight[i] = INF;
  }
  weight[0] = 0;
  color[0] = 1;

  while(1){
    min = INF;
    hen = -1;
    for(i = 0;i < n;i++){
      if(color[i] != 2 && weight[i] < min){
        min = weight[i];
        hen = i;
      }
    }
    if(hen <= -1) break;
    color[hen] = 2;
    for(i = 0;i < n;i++){
      if(color[i] != 2 && G[hen][i] != INF){
        if(weight[i] > G[hen][i] + weight[hen]){
          color[i] = 1;
	  weight[i] = weight[hen] + G[hen][i];
        }
      }
    }
  }
  for(i = 0;i < n;i++){
    printf("%d ",i);
    if(weight[i] != INF) printf("%d\n",weight[i]);
    else printf("-1\n");
  }
}

