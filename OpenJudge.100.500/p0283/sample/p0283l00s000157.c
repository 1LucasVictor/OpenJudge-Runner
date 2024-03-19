#include<stdio.h>
#define NOT_FREE -1
#define FREE 1

int row[8],col[8],dpos[15],dneg[15],N=8,Q[8];

void putQueen(int);
void PrintBoard();

int main(){
  int k,i,r,c,j;

  for(i=0;i<N;i++){
    row[i]=col[i]=FREE;
    for(j=0;j<N;j++){
      Q[j]=0;
    }
  }
  for(i=0;i<2*N-1;i++) dpos[i]=dneg[i]=FREE;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    row[r]=c;
    col[c]=dpos[r+c]=dneg[r-c+N-1]=NOT_FREE;
    Q[r]=2;
  }
  putQueen(0);
  return 0;
  
  
}

void putQueen(int i){
  int j;
  static int count=0;
  if(i==N){
    if(count==0){
    PrintBoard();
    count++;
    return;
    }
  }
  if(count==1)return;
  for(j=0;j<N;j++){
    if(Q[i]==2)putQueen(i+1);
    if(Q[i]==2||col[j]==NOT_FREE||dpos[j+i]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE){
      continue;
    }
    
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    putQueen(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }

  
}

void PrintBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }

}