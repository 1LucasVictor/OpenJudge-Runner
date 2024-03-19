#include<stdio.h>
#define WHITE 1
#define BLACK 0

int mat[101][101];
int d[101];
int pi[101];
int color[101];
int n;

void prim(int r){
  int i,mincost,u;
  for(i = 1; i <= n; i++ ){
    d[i] = 2001;
    pi[i] = -1;
    color[i] = WHITE;
  }

  d[r] = 0;

  while(1){
    mincost = 2001;
    for( i = 1; i <= n; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == 2001) break;

    color[u] = BLACK;

    for(i = 1;i <= n; i++){
      if(color[i] != BLACK && mat[u][i] != -1 && mat[u][i] < d[i]){
	pi[i] = u;
	d[i] = mat[u][i];
      }
    }
  }
  
}

int main(){
  int i,j,g=0;

  scanf("%d",&n);

  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      scanf("%d",&mat[i][j]);
    }
  }

  prim(1);
  for(i = 1; i  <= n; i++) g += d[i];
  
  printf("%d\n",g);
  
}

