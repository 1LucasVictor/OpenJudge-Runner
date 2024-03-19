#include<stdio.h>

#define M 100

int main(){
  int i,j;
  int n,u,k,v;
  int T[M][M];

  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      T[i][j] = 0;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d %d",&u,&k);
    u--;
    for(j=0; j<k; j++){
      scanf("%d",&v);
      v--;
      T[u][v] = 1;
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(j == n-1) printf("%d",T[i][j]);
      else printf("%d ",T[i][j]);
    }
    printf("\n");
  }

  return 0;
}

