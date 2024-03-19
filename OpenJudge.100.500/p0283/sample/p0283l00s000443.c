#include<stdio.h>
#define FREE 0
#define NOT_FREE 1
#define N 8
#define putQ 2
typedef struct{
  int row;
  int col;
} Q;
int A[N][N];
int row[N];
int col[N];
int dpos[2*N-1];
int dneg[2*N-1];
int k;
Q q[8];
void queen(int);
void print(void);
int main(){
  int i,j;
 
  scanf("%d",&k);
  for(j=0;j<k;j++){
    scanf("%d%d",&q[j].row,&q[j].col);
  }
  i=0;
  queen(i);
  return 0;
}
void queen(int i){
  int j,l,flag;
if(i==N){
  print();
  return;
 }
for(j=0;j<=N-1;j++){
  if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE) continue;
  row[i]=j;
  col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
  queen(i+1);
  col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
 }
}
void print(){
  int i,j,flag;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
    A[i][j]=0;
    }
    flag=0;
  }
  for(i=0;i<N;i++){
    A[i][row[i]]=putQ;
  }
  for(j=0;j<k;j++){
    if(A[q[j].row][q[j].col]==putQ) flag++;
  }
  if(flag==k){
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i][j]==putQ)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  }
}
      
    


