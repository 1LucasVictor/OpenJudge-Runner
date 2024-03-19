#include<stdio.h>
#define INFTY 1000000
#define M 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int min(void);

int D[M][M];
int n;

int main() {

  int a,i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
      scanf("%d",&a);
      if(a == -1) D[i][j] = INFTY;
      else D[i][j] = a;
    }
  }

  printf("%d\n",min());

  return 0;

}

int min() {

  int u,v,minv,sum=0;
  int d[M],p[M],color[M];
  int i,j,k;
  
  for(i=0;i<n;i++) {
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1) {

    minv = INFTY;
    u = -1;

    for(i=0;i<n;i++) {
      if(minv > d[i] && color[i] != BLACK) {
	u = i;
	minv = d[i];
      }
    }

    if(u == -1) break;

    color[u] = BLACK;

    for(v=0;v<n;v++) {
      if( color[v] != BLACK && D[u][v] != INFTY ) {
	if(d[v] > D[u][v]) {
	  d[v] = D[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }

  for(i=0;i<n;i++) {
    if(p[i] != -1) sum += D[i][p[i]];
  }

  return sum;

}

