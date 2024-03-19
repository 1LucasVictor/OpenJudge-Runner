#include <stdio.h>
int main(){
  int m,n,i,j,c=0;
  int A[101][101],b[1001];

  scanf("%d %d",&n,&m);
  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      scanf("%d",&A[i][j]);
    }
  }
  for(i=1;i<=m;i++){
    scanf("%d",&b[i]);
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      c=A[i][j]*b[j]+c;
    }
      printf("%d\n",c);
      c=0;
  }
  return 0;
}