#include <stdio.h>
#define MAX 105

int G[MAX][MAX],n;

int main(void) {
  int u,k,v,i,j;
 
  scanf("%d",&n);
  for(i=0; i<n; i++){
    for(j=0; j<1 ;j++)
      G[i][j] = 0;
  }

  for(i=0; i<n; i++){
    scanf("%d%d",&u,&k);
    for(j=0; j<k; j++){
      scanf("%d",&v);
      G[u-1][v-1] = 1;
    }
  }
    
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(j != n-1)
            printf("%d ",G[i][j]);
        else printf("%d\n",G[i][j]);
    }
  }

  return 0;
}






