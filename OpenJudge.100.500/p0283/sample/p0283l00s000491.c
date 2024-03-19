#include<stdio.h>
#include<stdbool.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int r[N],c[N];
int DP[2*N-1],DN[2*N-1];
bool x[N][N];

void in(){
  int i;
  for(i=0;i<N;i++){
    r[i]=FREE;
    c[i]=FREE;
  }
  for(i=0;i<2*N-1;i++){
    DP[i]=FREE;
    DN[i]=FREE;
  }
}

void PB(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]){
        if(r[i]!=j)return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(r[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void rec(int i){
  if(i==N){
    PB();
    return;
  }
  int j;
  for(j=0;j<N;j++){
    if(NOT_FREE==c[j]||NOT_FREE==DP[i+j]||NOT_FREE==DN[i-j+N-1])continue;
    r[i]=j;
    c[j]=DP[i+j]=DN[i-j+N-1]=NOT_FREE;
    rec(i+1);
    r[i]=c[j]=DP[i+j]=DN[i-j+N-1]=FREE;
  }
}

int main(){
  in();
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++)x[i][j]=false;
  }
  int k;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    int r,c;
    scanf("%d%d",&r,&c);
    x[r][c]=true;
  }
  rec(0);
  return 0;
}

