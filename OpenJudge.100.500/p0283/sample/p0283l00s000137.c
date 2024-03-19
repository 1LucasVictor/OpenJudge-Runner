#include<stdio.h>
#define free 0
#define notfree 1
#define N 8
#define NIL -1

int col[50],dpos[50],dneg[50],row[50];
int A[50];

void printBoard(void){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j){
	printf("Q");
      }else{
	printf(".");
      }
    }
    printf("\n");
  }
}


int putqueen(int i){
  int j;
  if(i == N){
    printBoard();
    return 1;
  }

  if(A[i] == notfree){
    if(putqueen(i+1)){return 1;}
    return 0;
  }

  for(j=0;j<N;j++){
    if(col[j] == notfree || dpos[i+j] == notfree || dneg[i-j+N-1] == notfree){
      continue;
    }
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = notfree;
    if(putqueen(i+1)){return 1;}
    col[j] = dpos[i+j] = dneg[i-j+N-1] = free;
  }
  return 0;
}


int main(){
  int n,r,c,i,j;
  scanf("%d",&n);

  for(i=0;i<N;i++){
    A[i] = NIL;
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      col[i] = dpos[i+j] = dneg[i-j+N-1] = free;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&r,&c);
    row[r] = c;
    A[r] = notfree;
    col[c] = notfree;
    dpos[r+c] = notfree;
    dneg[r-c+N-1] = notfree;
  }
  
  putqueen(0);
  
  return 0;
}

