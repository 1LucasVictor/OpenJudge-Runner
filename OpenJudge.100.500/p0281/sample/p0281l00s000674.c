#include <stdio.h>

#define  N    150
#define INF   1000000000
#define NIL   -1
#define WHITE 1
#define BLACK 0

void initializiSingleSource(void);
void dijkstra(void);

int d[N];
int pi[N];
int color[N];
int str[N][N];
int n;

int main(){

  int i;
  int j;
  int u;
  int k;
  int v;
  
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      str[i][j]=-1;
    }
  }
  
  for(i=1;i<=n;i++){
  scanf("%d%d",&u,&k);
   for(j=1;j<=k;j++){
     scanf("%d",&v);
     scanf("%d",&str[u+1][v+1]);
   }
  }
  
  dijkstra();
   
  return 0;
}

void initializiSingleSource(void){

  int v;
  
  for(v=1;v<=n;v++){
    d[v] = INF;
   pi[v] = NIL;
   color[v] = WHITE;
  }
    d[1] = 0;
}

void dijkstra(void){

  int i;
  int u;
  int v;
  int min;

  
  initializiSingleSource();

  while(1){

  min = INF;

  for(i=1;i<=n;i++){
    if(color[i]!=BLACK && d[i] < min){
    min = d[i];
    u = i;
    }
   }
    if(min==INF) break;
    color[u] = BLACK;
  
  for(v=1;v<=n;v++){
    if(color[v]!=BLACK && str[u][v] + d[u] < d[v] && str[u][v]!=-1){
     d[v] = str[u][v];
     d[v] += d[u];
    }
   }
  }

  for(i=1;i<=n;i++){
  printf("%d %d\n",i-1,d[i]);
  }
  
}