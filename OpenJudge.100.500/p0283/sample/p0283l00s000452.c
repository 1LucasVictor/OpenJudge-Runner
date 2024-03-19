#include <stdio.h>
#include <stdlib.h>
 
#define N 8
#define ON 1
#define OFF 0
#define T 1
#define F -1
 
int Search(int);
void Print();
 
int X[N], Y[N], s[N][N], L[2*N-1], R[2*N-1];
 
int main(){
  int i, j, k, r, c;
 
  for(i = 0; i < N; i++){
    X[i] = OFF;
    Y[i] = OFF;
  }
 
  for(i = 0; i < 2*N-1; i++){
    L[i] = OFF;
    R[i] = OFF;
  }
 
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      s[i][j] = F;
    }
  }
 
  scanf("%d", &k);
  for(i = 0; i < k; i++){
    scanf("%d %d", &r, &c);
    s[r][c] = T;
  }
  Search(0);
  return 0;
}
 

 
void Print(){
  int i, j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(s[i][j] == T){
        if(X[i] != j){
          return;
        }
      }
    }
  }
 
  for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
      if(X[i] == j) {
        printf("Q");
      }else{
        printf(".");
      }
    }
    printf("\n");
  }
}

int Search(int p){
  int q;
 
  if(p == N){
    Print();
    return 0;
  }
 
  for(q = 0; q < N; q++){ 
    if(Y[q]==ON || L[p+q]==ON || R[p-q+N-1]==ON){
      continue;
    }
 
    X[p] = q;
    Y[q] = ON;
    L[p+q] = ON;
    R[p-q+N-1] = ON;
 
    Search(p+1);
 
    X[p] = OFF;
    Y[q] = OFF;
    L[p+q] = OFF;
    R[p-q+N-1] = OFF;
  }
   return 0;
}