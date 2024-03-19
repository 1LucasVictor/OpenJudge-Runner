#include <stdio.h>
#define N 100
#define NIL -1
#define INF 2000000000
int n;
int main(){
  int i,j,u,v,min=INF,count=0;
  int G[N][N];
  int pi[N];
  int d[N];
  int color[N];
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
    }
  }
  
  for(u=0;u<n;u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = 0;
  }

  d[0] = 0;
  
  while(1){
    min = INF;
    for(i=0;i<n;i++){
      if(color[i] != 1 && d[i] < min){
	min = d[i];
	u = i;
      }
    }

    if(min == INF){
      break;
    }

    color[u] = 1;

    for(v=0;v<n;v++){
      if(G[u][v] != -1 && color[v] != 1 && G[u][v] < d[v]){
	pi[v] = u;
	d[v] = G[u][v];
      }
    }
  }

  for(i=0;i<n;i++){
    count += d[i];
  }

  printf("%d\n",count);
  
  return 0;
}

