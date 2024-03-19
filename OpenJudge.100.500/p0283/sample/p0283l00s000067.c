#include<stdio.h>
#define B -3
#define V -4
#define N 8
#define M 15
#define free -1
#define Nfree -2
int T[N][N];
int row[N];
int col[N];
int dpos[M];
int dneg[M];

void printBoard(void){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(T[i][j]==B && j!=row[i]) return;
    }
  }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(j==row[i]) printf("Q");
      else printf(".");
      // if(j!=N-1) printf(" ");
    }
    printf("\n");
  }
}

void putQueen(int i){
  int j;
  if(i==N){
    printBoard();
    return;
  }
  //printf("%d\n",i);
  for(j=0;j<N;j++){
    if(col[j]==Nfree || dpos[i+j]==Nfree || dneg[i-j+N-1]==Nfree) {
      continue;
      printf("a");
    }
    //printf("%d %d\n",i,j);
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=Nfree;
    putQueen(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=free;
      }
  
}
int main(){
  int i,j,k,r,c;
  for(i=0;i<M;i++){
    dpos[i]=free;
    dneg[i]=free;
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      T[i][j]=V;
    }
  }
  for(i=0;i<8;i++){
    row[i]=0;
    col[i]=free;
    scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    T[r][c]=B;
    //row[r]=c;
    //col[c]=Nfree;
    //dpos[r+c]=Nfree;
    //dneg[r-c+N-1]=Nfree;
    //printf("%d %d %d \n",col[c],dpos[r+c],dneg[r-c+N-1]);
  }
  // for(i=0;i<N;i++){
    putQueen(0);
    //}
    //   for(i=0;i<N;i++){
    // printf("%d ",row[i]);
    //}
  return 0;
  }
}

