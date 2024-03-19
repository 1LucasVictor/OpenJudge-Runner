#include <stdio.h>
 
int  n,u,A[100][100],C[100],d[100];
 
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
    d[i] = 2001;
    C[i] =0;
  }
  d[0]=0;
 
  while (1){
    mincost = 2001;    
for(i=0;i<n;i++){
      if (C[i] != 1 && d[i] < mincost){
    mincost = d[i];
    u = i;
      }
    }
 if (mincost == 2001){
   break;
 }
    C[u] = 1;
    for (i=0;i<n;i++){
      if (C[i] != 1 && A[u][i] < d[i]){
    d[i] = A[u][i];
      }
    }
  }
  for (i=0;i<n;i++){
    sum+=d[i];
  }
  printf("%d\n",sum);
  return 0;
}