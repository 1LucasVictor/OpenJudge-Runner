#include<stdio.h>
#define MAX  500
#define HANI (1<<21)
#define WHITE  0
#define GRAY  1
#define BLACK  2

void dijkstra(void);


int n;
int A[MAX][MAX];

int main(){
  int i,j,u,k,v,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j] = HANI;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      A[u][v] = c;
    }
  }

  dijkstra();
  return 0;
}


void dijkstra(){
  int min,i,u,v;
  int d[MAX],color[MAX];

  for(i=0;i<n;i++){
    d[i] = HANI;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;
  while(1){
    min = HANI;
    u = -1;
    for(i = 0;i < n;i++){
      if(min > d[i] && color[i] != BLACK){
        u = i;
        min = d[i];
      }
    }
    if(u == -1) break;
    color[u] = BLACK;
    for(v=0;v<n;v++){
      if(color[v] != BLACK && A[u][v] != HANI){
        if(d[v] > d[u] + A[u][v]){
          d[v] = d[u] + A[u][v];
          color[v] = GRAY;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    d[i] == HANI ? -1 : d[i];
    printf("%d %d\n",i,d[i]);
  }
}

