#include <stdio.h>

#define N 102

int main(){
  int n, u, k;
  int v[N], a[N][N];
  int i, j;

  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      a[i][j] = 0;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d", &u, &k);
    
    for(j = 0; j < k; j++){
      scanf("%d", &v[j]);
      a[u][v[j]] = 1;
    }
  }
  
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      printf("%d", a[i][j]);
      
      if(j != n)printf(" ");
    }
    
    printf("\n");
  }
  
  return 0;
}