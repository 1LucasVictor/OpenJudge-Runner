#include <stdio.h>
#include <stdlib.h>

int prim(int **, int);

int main(){

  int i, j;
  int n;
  int **a;

  scanf("%d", &n);

  a = (int **)malloc(sizeof(int *) * n);

  for(i = 0; i < n; i++){
    a[i] = (int *)malloc(sizeof(int) * n);
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &a[i][j]);

    }

  }

  printf("%d\n", prim(a, n));

  return 0;
}

int prim(int **a, int n){

  int i;
  int *d;
  int *pi;
  int *color;
  int min, u, ans = 0;
  
  d = (int *)malloc(sizeof(int) * n);
  pi = (int *)malloc(sizeof(int) * n);
  color = (int *)malloc(sizeof(int) * n);
  
  for(i = 0; i < n; i++){
    d[i] = 10000;
    pi[i] = -1;
    color[i] = 0;
  }

  d[0] = 0;

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

    for(i = 0; i < n; i++)
      if(a[u][i] != -1){
	if(color[i] != 1 && a[u][i] < d[i]){
	  pi[i] = u;
	  d[i] = a[u][i];
	}

      }

  }

  for(i = 0; i < n; i++){
    ans += d[i];
    }

  return ans;
}