#include<stdio.h>
#define N 100
#define INF 2001
#define WHITE 0
#define BLACK 1
int n,a[N][N];
int d[N],pi[N],color[N];

void prim()
{
  int i,u,mincost;
  for(i=0; i<n; i++) {
    d[i] = INF;
    pi[i] = -1;
    color[i] = WHITE;
  }
  d[0] = 0;
  
  while(1){
    mincost = INF;
    for(i=0; i<n; i++) {
      if(color[i] != BLACK && d[i] < mincost) {
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == INF)  break;

    color[u] = BLACK;
    for(i=0; i<n; i++) {
      if(a[i][u] != -1){
	if(color[i] != BLACK && a[i][u] < d[i]) {
	  pi[i] = u;
	  d[i] = a[i][u];
	}
      }
    }
  }
}

int main()
{
  int i,j,sum=0;
  
  scanf("%d",&n);
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) 
      scanf("%d",&a[i][j]);
  }
  prim();
  for(i=0; i<n; i++) 
    if(pi[i]!=-1) sum+=d[i];
  printf("%d\n",sum);
  return 0;
}