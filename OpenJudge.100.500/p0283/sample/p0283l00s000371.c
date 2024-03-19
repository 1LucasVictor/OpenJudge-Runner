#include<stdio.h>
#define N 8
#define NF 1
#define F 0
int Q[N],ta[N],yo[N],nhi[15],nmg[15],fq[N][N];
//ta = col,yo=row,nhi=dpos,nmg=dneg
void putqueen(int);
void printboard();
int main(){
  int k,i,kin,qin;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&kin,&qin);
    fq[kin][qin]=NF;
  }
  putqueen(0);
  return 0;
}
void printboard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(fq[i][j]==NF&&Q[i]!=j) return;
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Q[i]!=j) printf(".");
      else printf("Q");
    }
    printf("\n");
  }
}
void putqueen(int i){
  int j;
  if(i==N){
    printboard();
    return;
  }
  for(j=0;j<N;j++){
    if(ta[j]!= NF && nhi[i+j]!=NF && nmg[i-j+N-1] != NF){
      Q[i]=j;
      ta[j]=nhi[i+j]=nmg[i-j+N-1]=NF;
      putqueen(i+1);
      Q[i]=ta[j]=nhi[i+j]=nmg[i-j+N-1]=F;
    }
  }
}
