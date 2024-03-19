#include <stdio.h>
#define MAX 100
#define BLACK 2
#define GRAY 1
#define WHITE 0

int n,A[MAX][MAX],d[MAX],p[MAX],color[MAX],cnt = 0;

int main(){
  int i,j,k,u,min;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(i = 0; i < n; i++){
    color[i] = 0;
    p[i] = -1;
    d[i] = 99999;
  }

  d[0] = 0;
  while(1){
    min = 99999;
    u = -1;
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < min){
	min = d[i];
	u = i;
      }
    }

    if(u == -1) break;

    color[u] = BLACK;

    for(k = 0; k < n; k++){
      if(color[k] != BLACK && A[u][k] != -1){
	if(A[u][k] < d[k]){
	  d[k] = A[u][k];
	  p[k] = u;
	  color[k] = GRAY;
	}
      }
    }
  }

  for(i = 0; i < n; i++){
    if(p[i] != -1) cnt += A[i][p[i]];
  }

  printf("%d\n",cnt);
}



