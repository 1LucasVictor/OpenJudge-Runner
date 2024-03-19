#include<stdio.h>
#include<stdlib.h>

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 200000

int **mat;
int n;

void dijkstra();

int main(){
  int i, j;
  int u, k, v, c;
  
  scanf("%d",&n);

  mat = (int **)malloc(n * sizeof(int *));
  for(i=0; i<n; i++){
    mat[i] = (int *)malloc(n * sizeof(int));
    for(j=0; j<n; j++)
      mat[i][j] = -1;
  }
  
  for(i=0; i<n; i++){
    scanf("%d%d",&u ,&k);
    
    for(j=0; j<k; j++){
      scanf("%d%d",&v ,&c);
      mat[u][v] = c;
    }
    
  }

  dijkstra();
  
  for(i=0; i<n; i++)
    free(mat[i]);
  free(mat);
  return 0;
}

void dijkstra(){
  int *color, *d;
  int mincost;
  int u,v;
  int sum=0;
  int i;
  
  color = (int *)malloc(n * sizeof(int));
  d = (int *)malloc(n * sizeof(int));

  for(i=0; i<n; i++){
    color[i] = WHITE;
    d[i] = INFTY;
  }

  d[0] = 0;

  while(1){
    mincost = INFTY;

    for(i=0; i<n; i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == INFTY)
      break;

    color[u] = BLACK;

    for(v=0; v<n; v++){
      if(color[v]!=BLACK && mat[u][v]!=-1){
	if(d[u] + mat[u][v] < d[v]){
	  d[v] = d[u] + mat[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }

  for(i=0; i<n; i++){
    printf("%d %d\n",i,d[i]);
  }

  free(color);
  free(d);
}

