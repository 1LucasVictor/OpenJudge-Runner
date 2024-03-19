#include <stdio.h>
#include <stdbool.h>
#define N 8
#define A -1
#define B 1
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
bool X[N][N];
void kansuu1(){
  int i,j;
  for(i=0;i<N;i++){
    row[i]=A;
    col[i]=A;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=A;
    dneg[i]=A;
  }
}
void kansuu2(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]){
	if(row[i]!=j) return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
void kansuu3(int i){
  int j;
  if(i==N){
    kansuu2();return;
  }
  for(j=0;j<N;j++){
    if(B==col[j]||B==dpos[i+j]||B==dneg[i-j+N-1]) continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=B;
    kansuu3(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=A;
  }
}
int main(void){
  int i,j,k,r,c;
  kansuu1();
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j]=false;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    X[r][c]=true;
  }
  kansuu3(0);
  return 0;
}
  

