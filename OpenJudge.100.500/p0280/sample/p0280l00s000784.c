#include<stdio.h>
int A[100][100];
int v[100];
void MST(int);
    
main(){
  int n, i, j;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &A[i][j]);
    }
  }
  MST(n);
  return 0;
}
    
void MST(int n){
  int i, j, k=1, X[100], minCost, min, sum=0;
      
  X[0] = 0;
  v[0] = 1;
  for(i = 1; i < n; i++){
    v[i] = 0;
  }
  while(1){
    minCost = 2001;
    for(i = 0; i < k; i++){
      for(j = 0; j < n; j++){
    if(A[X[i]][j] < minCost && A[X[i]][j] != -1 && v[j] != 1){
      minCost = A[X[i]][j];
      min = j;
    }
      }
    }
    if(k != n){
      X[k] = min;
      v[min] = 1;
      sum += minCost;
      k++;
    }
    else break;
  }
  printf("%d\n", sum);
}