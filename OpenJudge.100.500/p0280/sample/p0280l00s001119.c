#include<stdio.h>
#define MAX 100
#define INFTY (1<<21)
#define White 0
#define Gray 1
#define Black 2
int prim(void);

int n, M[MAX][MAX];

int main(){
  int i,j;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&M[i][j]);
      if(M[i][j] == -1) M[i][j] = INFTY;
    }
  }
  printf("%d\n",prim());

  return 0;
}

int prim(){
  int color[MAX],d[MAX],p[MAX];
  int min,u,v,sum=0;
  int i;

  for(i = 0; i < n; i++){
    color[i] = White;
    d[i] = INFTY;
    p[i] = -1;
  }

  d[0] = 0;
  p[0] = -1;
  
  while(1){
    min = INFTY;
    for(i = 0; i < n; i++){
      if(color[i] != Black && d[i] < min){
	min = d[i];
	u = i;
      }
    }
    if(min == INFTY) break;
      color[u] = Black;
      
      for(v = 0; v < n; v++){
	if(color[v] != Black && M[u][v] != INFTY){
	  if(M[u][v] < d[v]){
	    d[v] = M[u][v];
	    p[v] = u;
	    color[v] = Gray;
	  }
	}
      }
  }
  for(i = 0; i < n; i++){
    if(p[i] != -1) sum += M[i][p[i]];
  }
  return sum;
}