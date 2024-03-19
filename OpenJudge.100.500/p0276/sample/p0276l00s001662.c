#include<stdio.h>
#define N 100

int main(){
  int i, j, n, u, k, v;
  int V[N][N];
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      V[i][j] = 0;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d", &u, &k);
    for(j = 0; j < k; j++){
      scanf("%d", &v);
      V[u-1][v-1] = 1;
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(j) printf(" ");
      printf("%d", V[i][j]);
    }
    printf("\n");
  }

  return 0;
}

