#include<stdio.h>
#include<stdbool.h>
#define N 8
#define F -1
#define NF 1
int r[N],c[N],ds[2*N-1],dg[2*N-1];
bool x[N][N];
void initialize(){
  int i;
  for(i=0;i<N;i++){
    r[i]=F;
    c[i]=F;
  }
  for(i=0;i<2*N-1;i++){
    ds[i]=F;
    dg[i]=F;
  }
}
void in(){
  int i,j,k,r,c;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      x[i][j]=false;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    x[r][c]=true;
  }
}
void print(){
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
void recu(int i){
  int j;
  if(i==N){
    print();
    return;
  }
  for(j=0;j<N;j++){
    if(c[j]==NF || ds[i+j]==NF || dg[i-j+N-1]==NF)continue;
    r[i]=j;
    c[j]=ds[i+j]=dg[i-j+N-1]=NF;
    recu(i+1);
    r[i]=c[j]=ds[i+j]=dg[i-j+N-1]=F;
  }
}
int main(){
  initialize();
  in();
  recu(0);
  return 0;
}

