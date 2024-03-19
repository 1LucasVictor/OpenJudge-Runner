#include<stdio.h>
#include<stdlib.h>
  
#define INF 1000000
#define NIL NULL
#define WHITE 5000
#define BLACK 5001
void initializeSource(void);
void heavy(void);
int v[101][101],c[101][101];
int *d,*pi,*color,*k;
int n;



int main(){
  int i,j;
  int *u;
  scanf("%d",&n);
  
  u = malloc(sizeof(int)*n);
  d = malloc(sizeof(int)*n);
  pi = malloc(sizeof(int)*n);
  color = malloc(sizeof(int)*n);
  k = malloc(sizeof(int)*n);


  
  for(i = 0;i < n;i++){
    scanf("%d %d",&u[i],&k[i]);
    for(j = 0;j < k[i];j++){
      scanf("%d",&v[i][j]);
      scanf("%d",&c[i][j]);
    }
  }
  
  heavy();
  
  for(i = 0;i < n;i++){
    printf("%d %d\n",u[i],d[i]);
  }
  
  return 0;
}



void initializeSource(){
  int i;
  for(i = 0;i < n;i++){
    d[i] = INF;
    pi[i] = NIL;
    color[i] = WHITE;
  }
  d[0] = 0;
}



void heavy(){
  int i,j,mincost,u1,v1;
  
  initializeSource();
  
  while(1){
    mincost = INF;
    for(i = 0;i < n;i++){
      if(color[i] != BLACK && d[i] < mincost){
    mincost = d[i];
    u1 = i;
      }
    }
  
    if(mincost == INF)break;
  
    color[u1] = BLACK;
  
    for(v1 = 0;v1 < k[u1];v1++){
      if(color[v[u1][v1]] != BLACK && (d[u1] + c[u1][v1]) < d[v[u1][v1]]){
    pi[v[u1][v1]] = u1;
    d[v[u1][v1]] = d[u1] + c[u1][v1];
      }
    }
  }
}