#include<stdio.h>
int G[101][101];
int V[101];
void tree(int n){
int i, j, k=1, A[100], cost, min, sum=0;
     
  A[0] = 0;
  V[0] = 1;
  for(i = 1; i < n; i++){
    V[i] = 0;
  }
  while(1){
    cost = 9999;
    for(i = 0; i < k; i++){
      for(j = 0; j < n; j++){
    if(G[A[i]][j] < cost && G[A[i]][j] != -1 && V[j] != 1){
      cost = G[A[i]][j];
      min = j;
    }
      }
    }
    if(k != n){
      A[k] = min;
      V[min] = 1;
      sum += cost;
      k++;
    }
    else break;
  }
  printf("%d\n", sum);
}



   
main(){
  int n, i, j;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &G[i][j]);
    }
  }
     tree(n);
  return 0;
}
   