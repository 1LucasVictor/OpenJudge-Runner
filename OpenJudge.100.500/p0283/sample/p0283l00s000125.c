#include <stdio.h>
#define  N 8
#define Free -1
#define Not_Free 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int H[N][N];

void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(H[i][j]){
        if(row[i]!=j) return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%c",(row[i]==j)?'Q':'.');
    }
    printf("\n");
  }
}

void Put(int i){
  int j;
  if(i==N){
    printBoard();
    return;
  }
  for(j=0;j<N;j++){
    if(Not_Free==col[j] || Not_Free == dpos[i+j]
      || Not_Free == dneg[i-j+N-1])
      continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=Not_Free;
    Put(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=Free;
  }
}

int main(int argc, char const *argv[]) {
  int i,j,k,c,d;
  for (i =0; i < N; i++) {
    row[i]=Free;
    col[i]=Free;
  }
  for ( j = 0; j < 2*N; j++) {
      dpos[j]=Free;
      dneg[j]=Free;
  }
  for ( i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      H[i][j]=0;
    }
  }
  scanf("%d",&k);
  for (i = 0; i < k; i++) {
    scanf("%d %d",&c,&d);
    H[c][d]=1;
  }
  Put(0);
  return 0;
}