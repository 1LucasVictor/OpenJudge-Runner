#include<stdio.h>
#define FREE 0
#define NOT_FREE 1
#define N 8
#define M 15
 
int r, c, R[N], C[N], P[M], D[M];
 
int putQueen(int i){
 
  int j;
 
  if(i == N){
    return 0;
  }  
   
  if(R[i] == -1){ 
    for(j = 0 ; j < N ; j++){
      if(C[j] == NOT_FREE || P[i+j] == NOT_FREE || D[i-j+N-1] == NOT_FREE){
	continue;
      }
    
      R[i] = j;
      C[j] = P[i+j] = D[i-j+N-1] = NOT_FREE;
      if(putQueen(i+1) == 0){
	return 0;
      }
      R[i] = -1;
      C[j] = P[i+j] = D[i-j+N-1] = FREE;
    }
    return 1;
  }
  else{
    if(putQueen(i+1) == 0){
      return 0;
    }
    return 1;
  }
 
}
 
int main(){
 
  int i, j, k;
 
  for(i = 0 ; i < N ; i++){
    R[i] = -1;
  }
   
  scanf("%d", &k);
  for(i = 0 ; i < k ; i++){
    scanf("%d%d", &r, &c);
    R[r] = c;
    C[c] = NOT_FREE;
    P[r+c] = NOT_FREE;
    D[r-c+N-1] = NOT_FREE;
  }
 
  putQueen(0);
 
  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      if(R[i] == j){
	printf("Q");
      }
      else{
	printf(".");
      }
    }
    printf("\n");
  }
   
  return 0;
}