#include <stdio.h>
#define N 100

int main(){
  int i,j,n,u,k,num;
  int A[100][100];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    A[i][i] = 0;
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    if(k == 0){
      continue;
    }
    for(j=0;j<k;j++){
      scanf("%d",&num);
      A[u-1][num-1] = 1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j == n-1){
	printf("%d\n",A[i][j]);
      }
      else printf("%d ",A[i][j]);
    }
  }

  return 0;
  
}

