#include<stdio.h>

int main(){

  int i,j,l;
  int n;
  int u,k;

  //input
  scanf("%d",&n);
  int A[n][n];
  int B[n][n];
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(l=0;l<k;l++){
      scanf("%d",&B[i][l]);
    }
    for(j=0;j<n;j++){
      A[i][j]=0;
      for(l=0;l<k;l++){
	if(B[i][l]==j+1){
	  A[i][j]=1;
	}
      }
    }
  }  
  //output
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j==n-1) printf("%d\n",A[i][j]);
      else printf("%d ",A[i][j]);
    }
  }  
   
     

  return 0;
}

