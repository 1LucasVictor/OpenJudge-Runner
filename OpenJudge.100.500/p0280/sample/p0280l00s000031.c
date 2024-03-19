#include<stdio.h>
#include<stdlib.h>
 
#define NIL -1
#define MAX 101
 
int main(){
  int A[MAX][MAX];
  int V[MAX]={0};
  int Aij[MAX];
  int E[MAX]={NIL};
  int i,j,n,sum=0,max=0,min=0;
 
  scanf("%d",&n);
  for(i=0 ; i<n ; i++){
    for(j=0 ; j<n ; j++){
      scanf("%d",&A[i][j]);
    }
  }
 
  Aij[0] = 0;
  for(i=1; i<n; i++) Aij[i] = 2001;
 
  while(max != 2001){
    max = 2001;
    for(i=0 ; i<n ; i++){
      if(V[i] != 2 && Aij[i] < max){
        max = Aij[i];
        min = i;
      }
    }
    V[min] = 2;
    for(i=0 ; i<n ; i++){
      if(A[min][i] != NIL && V[i] != 2 && A[min][i] < Aij[i]){
        E[i] = min;
        Aij[i] = A[min][i];
        V[i] = 1;
      }
    }
  }
 
  for(i=0 ; i<n ; i++){
    if(E[i] != NIL) sum += A[i][E[i]];
  }
 
  printf("%d\n",sum);
 
  return 0;
}