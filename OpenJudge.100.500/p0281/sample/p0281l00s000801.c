#include <stdio.h>
#include <stdlib.h>

void dijkstra(int **, int, int);

int main(){

  int i, j;
  int n, u, k, v, c;
  int **a;

  scanf("%d", &n);

  a = (int **)malloc(sizeof(int *) * n);

  for(i = 0; i < n; i++){
    a[i] = (int *)malloc(sizeof(int) * n);

    for(j = 0; j < n; j++){
      a[i][j] = -1;
    }

  }

  for(i = 0; i< n; i++){
    scanf("%d%d", &u, &k);

    for(j = 0; j < k; j++){
      scanf("%d%d", &v, &c);

      a[u][v] = c;
    }

  }

  dijkstra(a, n, 0);

  return 0;
}

void dijkstra(int **a, int n, int r){

  int i;
  int *d;
  int *pi;
  int *color;
  int min, u;
  
  d = (int *)malloc(sizeof(int) * n);
  pi = (int *)malloc(sizeof(int) * n);
  color = (int *)malloc(sizeof(int) * n);
  
  for(i = 0; i < n; i++){
    d[i] = 10000;
    pi[i] = -1;
    color[i] = 0;
  }

  d[r] = 0;

  while(1){

    min = 10000;

    for(i = 0; i < n; i++){
      if(color[i] != 1 && d[i] < min){
	min = d[i];
	u = i;

      }

    }

    if(min == 10000) break;

    color[u] = 1;

    for(i = 0; i < n; i++){
      if(a[u][i] != -1){
	if(color[i] != 1 && d[u] + a[u][i] < d[i]){
	  pi[i] = u;
	  d[i] = d[u] + a[u][i];
	}
	
      }

    }

  }

  for(i = 0; i < n; i++){
    printf("%d %d\n", i, d[i]);
  }
  
}