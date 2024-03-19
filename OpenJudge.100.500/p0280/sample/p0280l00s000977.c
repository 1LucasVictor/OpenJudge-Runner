#include <stdio.h>
 
int main(){
  int n, i, j;
  int k=1;
  int A[101][101],B[101],G[101];
  int sz, min, out = 0;
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &A[i][j]);
    }
  }

  B[0] = 0;
  G[0] = 1;
  for(i = 1; i < n; i++){
    G[i] = 0;
  }
  while(1){
    sz = 2001;
    for(i = 0; i < k; i++){
      for(j = 0; j < n; j++){
        if(A[B[i]][j] < sz && A[B[i]][j] != -1 && G[j] != 1){
          sz = A[B[i]][j];
          min = j;
        }
      }
    }

    if(k != n){
      B[k] = min;
      G[min] = 1;
      out += sz;
      k++;
    }
    else break;
  }
  printf("%d\n", out);


  return 0;
}



