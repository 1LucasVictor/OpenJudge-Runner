#include <stdio.h>
#define N 8
#define FREE -1
#define NOTFREE 1

int gyou[N],retsu[N],leftback[2*N-1],rightback[2*N-1];
int X[N][N];

void initialize() {
  for(int i=0;i<N;i++){
    gyou[i]=FREE;
    retsu[i]=FREE;
  }
  for(int i=0;i<2*N-1;i++){
    leftback[i]=FREE;
    rightback[i]=FREE;
  }
}
void printchess() {
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(X[i][j]){
	if(gyou[i]!=j)return;
      }
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(gyou[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
void recursive(int i){
  if(i==N){
    printchess();
    return;
  }
  for(int j=0;j<N;j++){
    if(NOTFREE==retsu[j] || NOTFREE==leftback[i+j] || NOTFREE==rightback[i-j+N-1])continue;
    gyou[i]=j;
    retsu[j]=leftback[i+j]=rightback[i-j+N-1]=NOTFREE;
    recursive(i+1);
    gyou[i]=retsu[j]=leftback[i+j]=rightback[i-j+N-1]=FREE;
  }
}

int main() {
  initialize();
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      X[i][j]=0;
    }
  }
  int k;
  scanf("%d",&k);
  for(int i=0;i<k;i++){
    int r,c;
    scanf("%d%d",&r,&c);
    X[r][c]=1;
  }
  recursive(0);
  
  return 0;
}

