#include<stdio.h>
#define W 0
#define G 1
#define B 2

int n,M[100][100];

void dijkstra(){
  int i,u,v,minv;
  int d[100],color[100];

  for(i=0;i<n;i++){
    d[i] = 1000000;
    color[i] = W;
  }

  d[0] = 0;
  color[0] = G;
  while(1){
    minv = 1000000;
    u = -1;
    for(i=0;i<n;i++){
      if(minv > d[i] && color[i] != B){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1){
      break;
    }
    color[u] = B;
    for(v=0;v<n;v++){
      if(color[v] != B && M[u][v] != 1000000){
	if(d[v] > d[u] + M[u][v]){
	  d[v] = d[u] + M[u][v];
	  color[v] = G;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,(d[i] == 1000000 ? -1 : d[i]));
  }
}

int main(){
  int i,j,k,c,u,v;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = 1000000;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}