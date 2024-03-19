#include<stdio.h>
#define MAX 100
static const int  INFTY = 10000000;

int i,j,M[MAX][MAX],e,minv,d[MAX],p[MAX],color[MAX],u,v,n,sum=0;
int prim(){
  int u,minv;
  int d[MAX],p[MAX],color[MAX];

  for(i = 0;i < n;i++){
    d[i] = INFTY;
    p[i] = -1;
    color[i] = 0;
  }

  d[0] = 0;
  while(1){
    minv = INFTY;
    u = -1;
    for(i = 0;i< n;i++){
      if(minv > d[i] && color[i] != 2){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = 2;
    for(v = 0;v < n;v++){
      if(color[v] != 2 && M[u][v] != INFTY){
	if(d[v] > M[u][v]){
	  d[v] = M[u][v];
	  p[v] = u;
	  color[v] = 1;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i] != -1)sum += M[i][p[i]];
  }
  return sum;
}

int main(){
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      if(e == -1)M[i][j] = INFTY;
      else if(e != -1)M[i][j] = e;
    }
  }
  printf("%d\n",prim());

  return 0;
}