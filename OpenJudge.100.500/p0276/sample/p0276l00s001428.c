#include<stdio.h>
#define N 100


main(){

  int u,k,v,A[N][N],i,n,j;

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      A[i][j]=0;
    }
  }

  for(i=1;i<=n;i++){
    scanf("%d %d",&u,&k);
    for(j=1;j<=k;j++){
      scanf("%d",&v);
      A[u][v]=1;
    }
  }

 for(i=1;i<=n;i++){ 
   for(j=1;j<=n-1;j++){
     printf("%d ",A[i][j]);
   }
   printf("%d",A[i][n]);
   printf("\n");
 }
 return 0;
}