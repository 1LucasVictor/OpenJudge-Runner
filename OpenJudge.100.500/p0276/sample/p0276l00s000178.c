#include <stdio.h>


int main() {

  int n,G[101][101];
  int i,j,k,l,u,a,t;


  scanf("%d",&n);

  for(i=0;i<n+1;i++)
    for(j=0;j<n+1;j++) {
      G[i][j] = 0;

    }

  for(i=0;i<n;i++){

    scanf("%d %d ",&k,&u);
    //    printf("u = %d\n",u);

    for(j=0;j<u;j++) {
      scanf("%d",&a);
      G[k -1][a-1] = 1;
      // printf("G[%d][%d] = 1\n",i,k-1);
    }
  }
    
  for(i=0;i<n;i++){
    for(j=0;j<n;j++) {
      printf("%d",G[i][j]);
      if(j != n-1) printf(" ");
    }
    printf("\n");
  }


  return 0;

    
    
}