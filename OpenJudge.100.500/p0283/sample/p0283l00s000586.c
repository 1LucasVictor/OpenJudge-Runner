#include<stdio.h>
#include<stdlib.h>
#define N 8
#define F -1
#define NOF 1

int row[N],c[N],dpos[2*N-1],dneg[2*N-1],T[N][N];

void tofree(){
  int i,j;
  for(i=0;i<N;i++) for(j=0;j<N;j++) T[i][j]=0;
  for(i=0;i<N;i++)row[i]=c[i]=F;
  for(i=0;i<2*N-1;i++)dpos[i]=dneg[i]=F;
}

void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(T[i][j]==1){
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

void put(int i){
  int j;
  if(i==N){
    print();
    return;
  }
  for(j=0;j<N;j++){
    if(c[j]==NOF || dpos[i+j]==NOF || dneg[i-j+N-1]==NOF)continue;
    row[i]=j;
    c[j]=dpos[i+j]=dneg[i-j+N-1]=NOF;
    put(i+1);
    c[j]=dpos[i+j]=dneg[i-j+N-1]=F;
  }
}

int main(){
  int i,j,n,m,v;
  tofree();

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&m,&v);
    T[m][v]=1;
  }
  put(0);
  return 0;
}
