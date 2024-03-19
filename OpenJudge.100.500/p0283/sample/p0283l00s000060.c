#include<stdio.h>
#define N 8
#define Free 2
#define Not_Free 3

int A[8][8],row[8],col[8],dpos[15],dneg[15],B[8]={0};

int Queen(int i){

  int k,l,j,m;

  if(i == N){
    for(k = 0;k < N; k++){
      for(l = 0; l < N; l++){
      if(row[k] == l) printf("Q");
      else printf(".");
      }
      printf("\n");
    }
    return 1;
  }

  if(B[i] == 1){
    if(Queen(i+1)) return 1;
    return 0;
  }
  
  for(j = 0; j < N; j++){
    if(col[j] == Not_Free || dpos[i+j] == Not_Free || dneg[i-j+N-1] == Not_Free)
      continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = Not_Free;
  
    if(Queen(i+1)) return 1;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = Free;
  }
  return 0;
}

int main(){
  int i,j,n,r,l;

  scanf("%d",&n);

  for(i = 0; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      A[i][j] = 0;
    }
  }

  for(i = 0; i < N; i++){
    col[i] = dpos[i] = dneg[i] = Free;
  }
  
  for(i = 0; i < n; i++){
    scanf("%d %d",&r,&l);
    row[r] = l ;
    B[r] = 1;
    col[l] = dpos[r+l] = dneg[r-l+N-1] = Not_Free;
  }

  Queen(0);
  return 0;
}

