#include <stdio.h>

#define N 101
  
int main(){
  int n, m;
  int i, j, k, l;
  int G[N][N];

  scanf("%d", &n);
  for(i = 0; i <= n; i++){
    for(j = 0; j <= n; j++){
      G[i][j] = 0;
    }
  } 

  for(i = 0; i < n; i++){
    scanf("%d%d", &m, &k);    
    for(j = 0; j < k; j++){
      scanf("%d", &l);
      G[m][l] = 1;      
    }
  }

  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if(j==n){
        if(G[i][j] != 0){
          printf("1");
        } else printf("0");
        break;    
      }

      if(G[i][j] != 0){
        printf("1 ");
      } else printf("0 ");
    }
    printf("\n");
  }
  return 0;
}