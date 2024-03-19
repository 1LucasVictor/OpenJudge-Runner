#include<stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE -2

int row[N],col[N],dpos[15],dneg[15],init[N];
void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(j==row[i]) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
  
void putQueen(int i){
  int j;
  if(i==N){
    printBoard();
    return;
  }
  if(init[i]==NOT_FREE) putQueen(i+1);
  else{
    for(j=0;j<N;j++){
      
      if((col[j]==NOT_FREE) || (dpos[i+j]==NOT_FREE) || (dneg[i-j+N-1]==NOT_FREE)) continue;
      
      row[i]=j;
      col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
      
      putQueen(i+1);
    
      col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    }
  }
}

int main(){
  int i,k,r ,c;
  for(i=0;i<N;i++) row[i]=col[i]=init[i]=FREE;
  
  for(i=0;i<15;i++) dneg[i]=dpos[i]=FREE;
    
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    row[r]=c;
    col[c]=dpos[r+c]=dneg[r-c+N-1]=init[r]=NOT_FREE;
  }

  putQueen(0);

  return 0;
}

