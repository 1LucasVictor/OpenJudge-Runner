#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, j, u, k, v;
  int m[100][100];

  scanf("%d",&n);
  if(n < 1 || 100 < n) exit(1);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      m[i][j]=0;
    }
  }
 
  for(i=0; i<n; i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=0; j<k; j++){
      scanf("%d",&v);
      m[u-1][v-1]=1;
    }
  }
  
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      printf("%d", m[i][j]);
      if(j < n-1) printf(" ");
    }
    printf("\n");
  }

  return 0;
}

