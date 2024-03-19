#include <stdio.h>
int main(){
  int n, m, A[1024][1024], b[1024],i,j,c[1024];
  scanf("%d %d",&n, &m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d", &A[i][j]);

    }
  }
  for(j=0;j<m;j++){
    scanf("%d", &b[j]);
  }
  for(i=0;i<1024;i++){
    c[i] = 0;
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      c[i] += A[i][j] * b[j];
    }
  }
  for(i=0;i<n;i++){
    printf("%d\n", c[i]);
  }


  return 0;
}

