#include<stdio.h>

#define N 8

int r[N],c[N],dp[2*N-1],dn[2*N-1];
int x[N][N];

void init(){
  int i;
  for(i=0;i<N;i++){r[i]=-1;c[i]=-1;}
  for(i=0;i<2*N-1;i++){dp[i]=-1;dn[i]=-1;}
}

void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]){if(r[i]!=j) return;}
    }
  }for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(r[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;
  
  if(i==N){printBoard();return;}

  for(j=0;j<N;j++){
    if(1==c[j]||1==dp[i+j]||1==dn[i-j+N-1]) continue;
    r[i]=j; c[j]=dp[i+j]=dn[i-j+N-1]=1;
    recursive(i+1);
    r[i]=c[j]=dp[i+j]=dn[i-j+N-1]=-1;
  }
}

int main(){
  int i,j,k,row,col;
  
  init();

  for(i=0;i<N;i++){
    for(j=0;j<N;j++) x[i][j]=0;
  }

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&row,&col);
    x[row][col]=1;
  }

  recursive(0);

  return 0;
}

