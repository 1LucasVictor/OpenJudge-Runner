#include<stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE -1

int X[N][N];
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];


void printboard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]==1){
        if(row[i]!=j){
          return;
        }
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
      printf("Q");
    }
    else{
      printf(".");
  }
  }
  printf("\n");
}
}

void initialize(){
 int i;
 for(i=0;i<N;i++){
   row[i]=FREE;
   col[i]=FREE;
 }

 for(i=0;i<2*N-1;i++){
   dpos[i]=FREE;
   dneg[i]=FREE;
 }
}

void recursive(int i)
{
  int j;
  if(i==N){
    printboard();return;
  }
  for(j=0;j<N;j++){
    if((col[j]==NOT_FREE)||(dpos[i+j]==NOT_FREE)||(dneg[i-j+N-1]==NOT_FREE)){
    continue;
  }
  row[i]=j;
  col[j]=NOT_FREE;
  dpos[i+j]=NOT_FREE;
  dneg[i-j+N-1]=NOT_FREE;
  recursive(i+1);
  col[j]=FREE;
  dpos[i+j]=FREE;
  dneg[i-j+N-1]=FREE;
  }
}
int main()
{
  int i,j,k,r,c;
  initialize();
  for(i=0;i<N;i++){
  for(j=0;j<N;j++){
  X[i][j]=-1;
}
}

  scanf("%d",&k);
  for(i=0;i<N;i++){
    scanf("%d%d",&r,&c);
    X[r][c]=1;
  }
  recursive(0);
  return 0;
}


