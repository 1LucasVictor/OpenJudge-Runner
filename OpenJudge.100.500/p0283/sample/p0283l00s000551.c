#include<stdio.h>
#define N 8

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int ary[N][N];

void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(ary[i][j]){
	if(row[i]!=j)return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void set(int n){
  int i;
  if(n==N){
    print();
    return;
  }
  for(i=0;i<N;i++){
    if(col[i]==1 || dpos[n+i]==1 || dneg[n-i+N-1]==1)continue;
    row[n]=i;
    col[i]=dpos[n+i]=dneg[n-i+N-1]=1;
    set(n+1);
    row[n]=col[i]=dpos[n+i]=dneg[n-i+N-1]=-1;
  }
}

int main(){
  int i,j,k,x,y;
  for(i=0;i<N;i++){
    row[i]=-1,col[i]=-1;
  }
  for(i=0;i<N;i++){
    dpos[i]=-1;dneg[i]=-1;
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      ary[i][j]=0;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&y,&x);
    ary[y][x]=1;
  }
  set(0);
  return 0;
      
}

