#include <stdio.h>
#define MAX 101
#define INFINITY 1048576
#define WHITE -1
#define GRAY 0
#define BLACK 1
#define true 1

int serch(int);

int M[MAX][MAX];

int main(){
  int n,i,j,x,y;

  scanf("%d",&n);
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      scanf("%d",&M[i][j]);
      if(M[i][j]==-1) M[i][j]=INFINITY;
    }
  }
  printf("%d\n",serch(n));
  return 0;
}

int serch(int n){
  int u, v, min, i, j, d[MAX], p[MAX], c[MAX], sum = 0;

  for(i = 1; i <= n; i++){
    c[i] = WHITE;
    d[i] = INFINITY;
    p[i] = -1;
  }
  p[1] = -1;
  d[1] = 0;

  while(true){
    min = INFINITY;
    u = -1;
    for(i = 1; i <= n; i++){
      if(min > d[i] && c[i] != BLACK){
        u = i;
        min = d[i];
      }
    }
    if(u == -1) break;
    c[u] = BLACK;
    for(v= 1; v <= n; v++) {
      if(c[v] != BLACK && M[u][v] != INFINITY){
        if(d[v] > M[u][v]) {
          d[v] = M[u][v];
          p[v] = u;
          c[v] = GRAY;
        }
      }
    }
  }
  for(i = 1; i <= n; i++){
    sum += d[i];
  }
  return sum;
}

