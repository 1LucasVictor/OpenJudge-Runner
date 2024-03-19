#include <stdio.h>
#define N 100

int G[N][N];

int main(){

  int n = 0, u = 0, k = 0, v;
  int i = 0,j = 0;

  //initialize
  for(i = 0; i < N; i++){
    
    for(j = 0; j < N; j++){
      G[i][j] = 0;
    }
    
  }

  //scan
  scanf("%d",&n);
  
  for(i = 0; i < n; i++){
    scanf("%d%d",&u,&k);
    
    for(j = 0; j < k; j++){
      scanf("%d",&v);
      G[i][v-1] = 1;
    }
    
  }

  //print
  for(i = 0; i < n; i++){

    for(j = 0; j < n; j++){
      if(j == n-1)printf("%d",G[i][j]);
      else printf("%d ",G[i][j]);
    }

    printf("\n");
    
  }
  
  return 0;
  
}

