#include <stdio.h>
 
int  n,u,A[100][100],B[100],C[100];
 
int main(){
  int i,j,mincost,sum = 0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
      if(A[i][j] == -1)A[i][j] = 2001;
    }
  }
  
  for(i=0;i<n;i++){
    C[i] = 2001;
    B[i] =0;
  }
  C[0]=0;
 
  while (1){
    mincost = 2001;    
for(i=0;i<n;i++){
      if (B[i] != 1 && C[i] < mincost){
    mincost = C[i];
    u = i;
      }
    }
 if (mincost == 2001){
   break;
 }
    B[u] = 1;
    for (i=0;i<n;i++){
      if (B[i] != 1 && A[u][i] < C[i]){
    C[i] = A[u][i];
      }
    }
  }
  for (i=0;i<n;i++){
    sum+=C[i];
  }
  printf("%d\n",sum);
  return 0;
}