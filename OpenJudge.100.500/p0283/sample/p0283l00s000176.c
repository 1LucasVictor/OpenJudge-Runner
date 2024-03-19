#include<stdio.h>


#define N 8
#define M 15
int row[N];
int col[N];
int dpos[M];
int dneg[M];
int IN[N];
int k;

void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}


int check(int q){
  int l;
  for(l=0;l<k;l++){
      if(IN[l]==q) {
	q=check(q+1);
      }
    }
  return q;
}
//Not free=1,Free=0
void putQueen(int i){
  int j;
  i=check(i);
  if(i==N){
    printBoard();
    return;
  }
  
  for(j=0;j<N;j++){
    if(col[j]==1||dpos[i+j]==1||dneg[i-j+N-1]==1){
      continue;
    }
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=1;
    putQueen(i+1);
    
    col[j]=dpos[i+j]=dneg[i-j+N-1]=0;    
  }
  
  
}

int main(){
  int i;
  int b;
  int a;
  

  for(i=0;i<N;i++){
    row[i]=col[i]=0;
  }
  for(i=0;i<M;i++){
    dpos[i]=dneg[i]=0;
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&a,&b);
    IN[i]=a;
    row[a]=b;
    col[b]=dpos[a+b]=dneg[a-b+N-1]=1;
  }
  putQueen(0);
  return 0;
}

