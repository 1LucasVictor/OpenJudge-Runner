#include<stdio.h>
#define INF 1000000
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2


int n;
int M[100][100];

void cost(){
  int d[100];
  int color[100];
  int min,u;
  int i,j;

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

    for(j=0;j<n;j++){
      if(color[j] != BLACK && M[u][j] != INF){
        if(d[u] + M[u][j] < d[j]){
          d[j] = d[u] + M[u][j];
          color[j] = GRAY;
        }
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,(d[i] == INF? -1 : d[i]));
  }
}

int main(){
  int k,l,x,y;
  int i,j;


  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = INF;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&k,&l);
    for(j=0;j<l;j++){
      scanf("%d%d",&x,&y);
      M[k][x] = y;
    }
  }

  cost();

  return 0;
}

