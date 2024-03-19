#include<stdio.h>
#include<stdlib.h>

int main(){

  int n, G[100][100], i, j, u, k, v;

  scanf("%d", &n);
  
  for(i=0; i<n; i++){
    scanf("%d%d", &u, &k);
    for(j=0; j<k; j++){
      scanf("%d", &v);
      G[i][v-1] = 1;
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      printf(" %d", G[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

