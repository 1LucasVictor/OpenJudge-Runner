#include <stdio.h>

int main(void){
  int n,m,A[1000][1000],b[1000],c,i,j;
  scanf("%d %d",&n,&m);
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      A[i][j] = 0;
      b[j] = 0;
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      scanf("%d",&A[i][j]);
    }
  }
  for(j = 0; j < m; j++){
    scanf("%d",&b[j]);
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      c += A[i][j];
    }
    printf("%d\n",b[i] + c);
    c = 0;
  }
  return 0;
}
