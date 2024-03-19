#include <stdio.h>
#define INF 100000000
#define WHITE 1
#define BLACK 2
#define N 105
#define NIL -1



typedef struct A{
  int num;
  int v[N];
  int c[N];
}DATA;

int G[N][N],d[N],pi[N],color[N];
DATA data[N];

void initializeSingleSource(int);
void dijkstra(int);

void relax(int,int);
  
int main() {
  int i,j,n,k;
  
  scanf("%d",&n);
 
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      G[i][j] = NIL;
    }
  }
  
  for(i = 0; i < n; i++) {
    scanf("%d%d",&data[i].num,&k);
    for(j = 0; j < k; j++) {
      scanf("%d%d",&data[i].v[j],&data[i].c[j]);
      G[i][data[i].v[j]] = data[i].c[j]; 
    }  
  }
  /*
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      printf("%d ",G[i][j]);
    }
    printf("\n");
    }
  */
  dijkstra(n);
  
  for(i = 0; i < n; i++) {
    printf("%d %d\n", data[i].num, d[i]);
  }
   
  return 0;
}


void initializeSingleSource(int n)
{
  int i;
  for(i = 0; i < n; i++) {
    d[i] = INF;
    pi[i] = NIL;
    color[i] = WHITE;
  }
  d[0] = 0;
}

void relax(int n,int u)
{
  if(d[n] > d[u] + G[u][n]) {
    d[n] = d[u] + G[u][n];
    pi[n] = u;
  }    
  }
 
void dijkstra(int n)
{
  int i,mincost,u;
  initializeSingleSource(n);
  while(1) {
    mincost = INF;
    for(i = 0; i < n; i++) {
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INF) break;

    color[u] = BLACK;

    for(i = 0; i < n; i++) {
      if(color[i] != BLACK && (d[u] + G[u][i]) < d[i] && G[u][i] != NIL) {
	pi[i] = u;
	d[i] = d[u] + G[u][i];
      }
    }
  }
  
  
} 
  

