#include<stdio.h>
#define NOT_FREE -1
#define FREE 1
#define N 8

int put[N][N],row[N],col[N],dpos[2*N-1],dneg[2*N-1];

void initialize(void){
  int i;
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
}

void print(void)
{
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(put[i][j]){
        if(row[i]!=j) return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
        printf("Q");
      }else{
        printf(".");
      }
    }
    printf("\n");
  }
}
void putqueen(int i)
{
  int j;
  if(i==N){
    print();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE){
      continue;
    }
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    putqueen(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

int main(){
  int i,j,k,r,c;
  initialize();

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      put[i][j]=0;
    }
  }

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    put[r][c]=1;
  }
  putqueen(0);

  return 0;
}
