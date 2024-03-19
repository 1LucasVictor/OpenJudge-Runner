#include<stdio.h>

int main(){

  int i,j,u,k,v,A[100][100],n;

  scanf("%d",&n);

  for(i=0;i<n;i++){

    A[i][i]=0;

  }

  for(i=0;i<n;i++){
  
    scanf("%d%d",&u,&k);

    for(j=0;j<k;j++){

      scanf("%d",&v);
      
      A[u-1][v-1]=1;



    }
  }

  printf("\n");

  for(i=0;i<u;i++){
    for(j=0;j<u;j++){

      if(j==u-1) printf("%d\n",A[i][j]);
      else printf("%d ",A[i][j]);

    }
  }

  return 0;
}