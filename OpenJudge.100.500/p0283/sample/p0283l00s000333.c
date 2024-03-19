#include<stdio.h>
#include<stdbool.h>
#define FREE -1
#define NOTFREE 1
#define N 8
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];

bool X[N][N];

void initialize(){
  int i;
  for(i=0;i<N;i++){
    row[i]=col[i]=FREE;
    //col[i]=FREE;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=dneg[i]=FREE;
    //dneg[i]=FREE;
  }
}
void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
       if(X[i][j]){
         if(row[i]!=j)return;
       }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%c",((row[i]==j)?'Q':'.'));
    }
    printf("\n");
  }
}
void recursive(int i){
  int j;
  if(i==N){
    printBoard();
    return;
  }
  for(j=0;j<N;j++){
    if((NOTFREE==col[j])||(NOTFREE==dpos[i+j])||(NOTFREE==dneg[i-j+N-1]))
    continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOTFREE;
    recursive(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}
int main(){
  int i,j,k,r,c;
  initialize();
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j]=false;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    X[r][c]=true;
  }
  recursive(0);
  return 0;
}

