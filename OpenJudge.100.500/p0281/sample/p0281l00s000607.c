#include <stdio.h>
#define MAX 100
#define BLACK 2
#define GRAY 1
#define WHITE 0

int n,A[MAX][MAX],d[MAX],color[MAX],cnt = 0;

int main(){
  int i,j,v,u,k,c,l,m,y,min;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      A[i][j] = 99999999;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d%d",&v,&c);
      A[u][v] = c;
    }
  }

  for(i = 0; i < n; i++){
    color[i] = 0;
    d[i] = 99999999;
  }

  d[0] = 0;
  color[0] = GRAY;
  while(1){
    min = 99999999;
    l = -1;
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < min){
	min = d[i];
	l = i;
      }
    }

    if(l == -1) break;

    color[l] = BLACK;

    for(m = 0; m < n; m++){
      if(color[m] != BLACK && A[l][m] != 99999999){
	if(A[l][m] + d[l] < d[m]){
	  d[m] = A[l][m] + d[l];
	  color[m] = GRAY;
	}
      }
    }
  }

  for(i = 0; i < n; i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}

