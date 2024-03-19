#include<stdio.h>
int main(){
  int A[3][4];
  int b[4];
  int n,m,i,j,k,o = 0;

  scanf("%d%d",&n,&m);
  for(i = 0;i <  n;i++){
    for(j = 0;j <  m;j++){
       scanf("%d",&A[i][j]);
    }
  }
  for(i = 0;i <  m;i++){
    scanf("%d",&b[i]);
  }
  for(i = 0;i <  n;i++){
    for(j = 0;j <  m;j++){
      k = A[i][j] *b[j];
      o += k;
    }
    printf("%d\n",o);
    o = 0;
  }
  return 0;
}
