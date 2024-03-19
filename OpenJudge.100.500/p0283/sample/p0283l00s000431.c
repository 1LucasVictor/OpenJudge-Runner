#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int n,r[N],c[N], dpos[2*N-1], dneg[2*N-1],A[N][N];

void initialize(){
  for(int i=0;i<N;i++){ r[i]=FREE; c[i]=FREE;}
  for(int i=0;i<2*N-1;i++){ dpos[i]=FREE; dneg[i]=FREE;}
}

void print(){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(A[i][j]){
	if(r[i]!=j) return;
      }
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(r[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  //printf("QTWRWY");
}
  
void putQueen(int i){
  int j;
  if(i==N){
    print();
    return;
  }
  for(j=0;j<N;j++){
    if(c[j] == NOT_FREE || dpos[i+j]== NOT_FREE
       || dneg[i-j+N-1]==NOT_FREE){
      continue;
    }
    r[i]=j;
    c[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    putQueen(i+1);
    r[i]=c[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

int main(){
  int r,c;
  initialize();
  

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      A[i][j]=0;
    }
  }
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    A[r][c]=1;
  }

  putQueen(0);
  
  return 0;
}

  

