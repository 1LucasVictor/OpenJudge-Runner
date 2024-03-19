#include <stdio.h>
 
int main(void){
  int A[100][100]={0};
  int b[100][1]={0};
  int C[100][1]={0};
  int n,m,i,j,num;
 
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&num);
      A[i][j]=num;
    }
  }
  for(i=0;i<m;i++){
    scanf("%d",&num);
    b[i][0]=num;
  }
 
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      C[i][0]+=A[i][j]*b[j][0];
    }
  }
 
  for(i=0;i<n;i++){
    printf("%d\n",C[i][0]);
  }
 
  return 0;
 
}