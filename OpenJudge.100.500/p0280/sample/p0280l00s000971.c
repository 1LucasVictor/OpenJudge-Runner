
#include<stdio.h>
int A[101][101];
int G[101];
void Tree(int);

int main(){
  int n, i, j;
 
  scanf("%d", &n);
  for(i = 0; i < n; i++){
     for(j = 0; j < n; j++){
       scanf("%d", &A[i][j]);
    }
  }
   Tree(n);
   return 0;
}

void Tree(int n){
   int i, j, k=1;
   int X[100], cost, min, res=0;
  
  X[0] = 0;
  G[0] = 1;
  for(i = 1; i < n; i++){
    G[i] = 0;
  }
  while(1){
    cost = 2001;
    
    for(i = 0; i < k; i++){
      for(j = 0; j < n; j++){
    if(A[X[i]][j] < cost && A[X[i]][j] != -1 && G[j] != 1){
      cost = A[X[i]][j];
      min = j;
    }
      }
    }
    if(k != n){
      
      X[k] = min;
      G[min] = 1;
      res += cost;    
      k++;
    }

    else  break;

  }

  printf("%d\n", res);

  return;
}