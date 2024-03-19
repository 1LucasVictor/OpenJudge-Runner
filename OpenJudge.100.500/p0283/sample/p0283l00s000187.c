#include<stdio.h>
#include<stdlib.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

void tofree();
void print();
void put(int);
int row[N],c[N],dpos[2*N-1],dneg[2*N-1],T[N][N];

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


void tofree(){
  int i,j;
  for(i=0;i<N;i++) for(j=0;j<N;j++) T[i][j]=0;
  for(i=0;i<N;i++)row[i]=c[i]=FREE;
  for(i=0;i<2*N-1;i++)dpos[i]=dneg[i]=FREE;
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
    if(c[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)continue;
    row[i]=j;
    c[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    put(i+1);
    c[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

