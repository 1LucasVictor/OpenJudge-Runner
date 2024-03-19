#include<stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF (1<<21)
#define MAX 101
int n,M[MAX][MAX];

int prim(){
  int u,minv,i,j,v,sum;
  int d[MAX],p[MAX],color[MAX];
  for(i=0;i<n;i++){
    d[i] = INF;
    p[i] = -1;
    color[i] = WHITE;
  }
  d[0] = 0;
  while(1){
    minv = INF;
    u = -1;
    for(i=0;i<n;i++){
      if(minv > d[i] && color[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1)break;
    color[u] = BLACK;
    for(v=0;v<n;v++){
      if(color[v] != BLACK && M[u][v]  != INF){
	if(d[v] > M[u][v]){
	  d[v] = M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  sum = 0;
  for(i=0;i<n;i++){
    if(p[i] != -1)sum += M[i][p[i]];
  }

  return sum;
}

int main(){
  int temp,ans,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    scanf("%d",&temp);
    if(temp == -1)M[i][j] = INF;
    else M[i][j] = temp;
    }
  }
  ans = prim();
  printf("%d\n",ans);

  return 0;
}

