#include<stdio.h>

#define N 100

int main(void){
  int n,E[N][N];
  int u,v;
  int i,j,k;

  scanf(" %d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      E[i][j] = 0;
    }
  }
  
  for(i = 0; i < n; i++){
    scanf(" %d",&u);
    scanf(" %d",&k);
    for(j = 0; j < k; j++){
      scanf(" %d",&v);
      E[u-1][v-1] = 1;
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(j)printf(" ");
      printf("%d",E[i][j]);
    }
    printf("\n");
  } 
  
  return 0;
}

