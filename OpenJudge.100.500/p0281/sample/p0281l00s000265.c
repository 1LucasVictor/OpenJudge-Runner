#include<stdio.h>
#define INF 1000000
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2


int n;
int M[100][100];

void dkr(){
  int d[100];
  int color[100];
  int min,u;
  int i,v;

  for(i=0;i<n;i++){
    d[i] = INF;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;

  while(1){
    min = INF;
    u = NIL;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < min){
        min = d[i];
        u = i;
      }
    }

    if(u == NIL)break;
    color[u] = BLACK;

    for(v=0;v<n;v++){
      if(color[v] != BLACK && M[u][v] != INF){
        if(d[u] + M[u][v] < d[v]){
          d[v] = d[u] + M[u][v];
          color[v] = GRAY;
        }
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,(d[i] == INF? -1 : d[i]));
  }
}

int main(){
  int k,u,c,v;
  int i,j;


  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = INF;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v] = c;
    }
  }

  dkr();

  return 0;
}