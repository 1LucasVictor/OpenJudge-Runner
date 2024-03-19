#include<stdio.h>
#define N 100
#define INF 10000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int prim(void);

int n,ret,e;
int A[N][N];

int main()
{
  int i,j;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&e);
      if(e == -1)A[i][j] = INF;
      else A[i][j] = e;
    }
  }
  ret = prim();
  printf("%d\n",ret);

  return 0;
}

int prim(void){
  int u,minv,i,v,sum;
  int d[N],p[N],color[N];

  for(i = 0; i < n; i++){
    d[i] = INF;
    p[i] = -1;
    color[i] = WHITE;
  }
  d[0] = 0;

  while(1){
    minv = INF;
    u = -1;
    for(i = 0; i < n; i++){
      if(minv > d[i] && color[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1)break;
    color[u] = BLACK;
    for(v = 0; v < n; v++){
      if(color[v] != BLACK && A[u][v] != INF){
	if(d[v] > A[u][v]){
	  d[v] = A[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  sum = 0;
  for(i = 0; i < n; i++){
    if(p[i] != -1)sum += A[i][p[i]];
  }

  return sum;
}

