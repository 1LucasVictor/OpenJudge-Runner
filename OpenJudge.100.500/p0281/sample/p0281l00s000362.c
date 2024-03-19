#include <stdio.h>
#define MAX 101
#define INFINITY 1048576
#define WHITE -1
#define GRAY 0
#define BLACK 1
#define true 1

void serch(int,int *);

int M[MAX][MAX];

int main(){
  int n,i,j,k,v,a,d[MAX];

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      M[i][j] = INFINITY;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d",&a,&k);
    for(j = 0; j < k; j++){
      scanf("%d",&v);
      scanf("%d",&M[i][v]);
    }
  }

  serch(n,d);

  for(i = 0; i < n; i++){
    printf("%d ",i);
    if(d[i] == INFINITY) printf("%d",-1);
    else printf("%d\n",d[i]);
  }
  return 0;
}

void serch(int n,int *d){
  int u, v, min, i, j, p[MAX], c[MAX];

  for(i = 0; i < n; i++){
    c[i] = WHITE;
    d[i] = INFINITY;
  }

  d[0] = 0;
  c[0] = GRAY;

  while(true){
    min = INFINITY;
    u = -1;

    for(i = 0; i < n; i++){
      if(min > d[i] && c[i] != BLACK){
        u = i;
        min = d[i];
      }
    }

    if(u == -1) break;

    c[u] = BLACK;

    for(v = 0; v < n; v++){
      if(c[v] != BLACK && M[u][v] != INFINITY){
        if(d[v] > M[u][v] + d[u]){
          d[v] = M[u][v] + d[u];
          c[v] = GRAY;
        }
      }
    }
  }

  return;
}

