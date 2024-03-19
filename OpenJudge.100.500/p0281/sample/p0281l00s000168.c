#include<stdio.h>
#define MAX 100
#define INF (1 << 21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

void dijkstra();


int n,N[MAX][MAX];


int main(){
  int i,j,r,k,t,u,v;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){

      N[i][j] = INF;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&t);
      N[u][v]=t;
    }
  }
  dijkstra();
  return 0;
}

void dijkstra(){
  int i,x,minv,a[MAX],color[MAX];
  for(i=0;i<n;i++){
    a[i]=INF;

    color[i]=WHITE;
  }
  a[0] = 0;
  color[0]=GRAY;
while(1){
    minv = INF;
    x = -1;
    for(i=0;i<n;i++){
      if(minv > a[i] && color[i] != BLACK){
        x=i;
        minv = a[i];
      }
    }
    if(x == -1){
      break;
    }
    color[x] = BLACK;
    int v;
    for(v=0;v<n;v++){
      if(color[v] != BLACK && N[x][v] != INF){
        if(a[v] > a[x] + N[x][v]){
          a[v] =a[x] + N[x][v];

          color[v]=GRAY;
        }

      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,(a[i] == INF ? -1 : a[i]));
  }
}


