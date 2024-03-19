#include <stdio.h>
#define MAX 100
#define INF (1<<22)

int G[MAX][MAX];

void spanning(int);

int main(){
  int n,i,j,ans[MAX],sowa = 2000,a;

  scanf("%d",&n);
  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      scanf("%d",&a);
      if(a <= -1) G[i][j] = INF;
      else G[i][j] = a;
    }
  }

  spanning(n);
  
  return 0;
}

void spanning(int n){
  int color[MAX],parent[MAX],weight[MAX],i,min,sum = 0,hen;

  for(i = 0;i < n;i++){
    color[i] = 0;
    parent[i] = -1;
    weight[i] = INF;
  }
  weight[0] = 0;
  

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
	if(weight[i] > G[hen][i]){
	  parent[i] = hen;
	  color[i] = 1;
	  weight[i] = G[hen][i];
	}
      }
    }
  }
  for(i = 0;i < n;i++) if(parent[i] != -1) sum += G[i][parent[i]];
  printf("%d\n",sum);
}

