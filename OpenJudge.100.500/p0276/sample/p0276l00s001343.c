#include<stdio.h>
#define N 100

int main(){
  int i,n,j,k,num[N],A[N][N] = {},id[N],judge,a;
  scanf("%d",&n);

 
  
  for(i=0;i<n;i++){
    
    scanf("%d%d",&a,&num[i]);
    for(j=0;j<num[i];j++){
      scanf("%d",&judge);
      A[i][judge-1] = 1;
    }
  }
  
  for(i=0;i<n;i++){
    
    for(k=0;k<n-1;k++){
      printf("%d ",A[i][k]);
    }
    printf("%d",A[i][k]);
    printf("\n");
      }
      
    
      
   
  return 0;
}

