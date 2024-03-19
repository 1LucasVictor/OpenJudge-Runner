#include <stdio.h>

#define M 8
#define free 0
#define nfree 1

void print(void);
void arrange(int);

int bs[M][M];
int gyo[M];
int retsu[M];
int mnnm[2*M-1];
int hnnm[2*M-1];
int in;

int main(){
  int i,j,r,c;

  for(i=0;i<M;i++) gyo[i]=retsu[i]=mnnm[i]=hnnm[i]=free;
  for(i=0;i<2*M-1;i++) hnnm[i]=mnnm[i]=free;
  for(i=0;i<M;i++){
    for(j=0;j<M;j++) bs[i][j]=free;
  }
  
  scanf("%d",&in);
  for(i=0;i<in;i++){
    scanf("%d%d",&r,&c);
    bs[r][c]=nfree;
  }

  arrange(0);
  
  return 0;
}

void arrange(int i){
  int j;

  if(i==M){
    print();
    return;
  }

  for(j=0;j<M;j++){
    if(retsu[j]==nfree||mnnm[i-j+M-1]==nfree||hnnm[j+i]==nfree) continue;
    gyo[i]=j;
    retsu[j]=hnnm[i+j]=mnnm[i-j+M-1]=nfree;
    arrange(i+1);
    gyo[i]=retsu[j]=hnnm[i+j]=mnnm[i-j+M-1]=free;
  }
}

void print(){
  int i,j;

  for(i=0;i<M;i++){
    for(j=0;j<M;j++){
      if(bs[i][j]==nfree&&gyo[i]!=j) return;
    }
  }
  for(i=0;i<M;i++){
    for(j=0;j<M;j++){
      if(gyo[i]==j) printf("Q");
      else printf(".");
    }
   printf("\n");
  }
}

