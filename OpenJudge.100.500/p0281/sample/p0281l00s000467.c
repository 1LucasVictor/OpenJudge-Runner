#include<stdio.h>

#define M 100
#define INF 110000
#define whi 0
#define gra 1
#define bla 2

int n;
int T[M][M],d[M],color[M];

void dijkstra(void){
  int i,j;
  int min,u;

  for(i=0; i<n; i++){
    color[i] = whi;
    d[i] = INF;
  }

  d[0] = 0;

  while(1){
    min = INF;
    for(i=0; i<n; i++){
      if(color[i] != bla && d[i] < min){
	min = d[i];
	u = i;
      }
    }

    if(min == INF) break;

    color[u] = bla;

    for(i=0; i<n; i++){
      if(color[i] != bla && T[u][i] != INF){
	if(d[i] > (d[u] + T[u][i])){
	  d[i] = (d[u] + T[u][i]);
	  color[i] = gra;
	}
      }
    }
  }
}

int main(){
  int i,j;
  int u,k,v,c;
  
  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      T[i][j] = INF;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d %d",&u,&k);
    for(j=0; j<k; j++){
      scanf("%d %d",&v,&c);
      T[u][v] = c;
    }
  }

  dijkstra();

  for(i=0; i<n; i++){
    if(d[i] == INF)d[i] = -1;
    printf("%d %d\n",i,d[i]);
  }
  
  return 0;
}

