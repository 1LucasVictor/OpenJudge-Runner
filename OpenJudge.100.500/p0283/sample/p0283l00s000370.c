#include<stdio.h>
#define N 8
#define free -1
#define Notfree 1
#define False 0
#define True 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int A[N][N];

void initialize(void);
void recursive(int);
void printboard(void);

int main(){
  int i,j,n,a,b;
  initialize();
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      A[i][j]=False;
    }

  }
  scanf("%d",&n);
  for(i=0;i<n;i++){

    scanf("%d %d",&a,&b);
    A[a][b]=True;
  }
  recursive(0);
  return 0;
}
void initialize(){
  int i,j;
  for(i=0;i<N;i++){
    row[i]=free;
    col[i]=free;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=free;
    dneg[i]=free;
  }
}
void printboard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i][j]){
	if(row[i] != j){
	  return;
	}
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }

}
void recursive(int i){
  int j;
  if(i == N){
    printboard();
    return;
  }
  for(j=0;j<N;j++){
    if(Notfree == col[j] || Notfree == dpos[i+j] || Notfree == dneg[i-j+N-1])continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=Notfree;
    recursive(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=free;
  }
}

