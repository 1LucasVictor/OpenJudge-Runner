#include<stdio.h>
#define N 8
#define nfree -1
#define free 1

int Board[N][N];
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
void p();
void Queen(int);

int main(){
  int n;
  int i,j;
  int x,y;
     
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      Board[i][j] = 0;
    }
  }
     
  for(j=0; j<N; j++){
    row[j]=0;
    col[j]=0;
  }
  for(j=0; j<2*N-1; j++){
    dpos[j]=0;
    dneg[j]=0;
  }
     
  scanf("%d",&n);
     
  for(i=0; i<n; i++){
    scanf("%d %d",&x,&y);
    Board[x][y] = 1;
  }
     
  Queen(0);
  return 0;
}

void p(){
  int i,j; 
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(Board[i][j]){
    if(row[i]!=j) return;
      }
    }
  }
 
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void Queen(int i){
  int j;
  if(i==N){
    p();
    return;
  }
     
  for(j=0; j<N; j++){
    if(nfree==col[j]||nfree==dpos[i+j]||nfree==dneg[i-j+N-1]) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = nfree;
    Queen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = free;
  }
}