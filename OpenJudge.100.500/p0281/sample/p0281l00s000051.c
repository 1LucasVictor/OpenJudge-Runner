#include <stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
int A[100][100];
int d[100], p[100], color[100];
void dijkstra(int);
int main() {
  int n,i,j,u,k,v,c;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      A[i][j] = 100001;
    }
  }
  for (i = 0; i < n;i++) {
    scanf("%d",&u);
    scanf("%d",&k);
    for (j = 0; j < k;j++) {
      scanf("%d%d",&v,&c);
      A[u][v] = c;
    }
  }/*
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
	printf("%6d ",A[i][j]);
      }
      printf("\n");
    }
   */
    dijkstra(n);
    for (i = 0; i < n;i++) {
      if(d[i] == 100001)d[i] += d[i-1] - 1;
      printf("%d %d\n",i, d[i]);
    }
}
void dijkstra(int n) {
  int i,j, v, u, mincost;
  for (i = 0; i < n; i++) {
    color[i] = WHITE;
    d[i] = 100001;
  }
  d[0] = 0;
  
  while (1) {
    mincost = 100001;
    //WHITE&GRAYn-1以内で一番小さい値の番をu
    for (i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] < mincost) {
	mincost = d[i];
	u = i;
      }
    }
    if (mincost == 100001)break;
    color[u] = BLACK;
    
    for (v = 0; v < n; v++) {
      if (color[v] != BLACK && A[u][v] < 100001) {
	if (d[u] + A[u][v] < d[v]) {
	  d[v] = d[u] + A[u][v];
	  color[v] = GRAY;
	}
      }
    }
    /*
    for (j = 0; j < n; j++) {
      printf(" %d",d[j]);
    }
    printf("\n");
    */
  }
}

