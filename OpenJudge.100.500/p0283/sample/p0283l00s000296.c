#include<stdio.h>
#define NOT_FREE 1
#define FREE 0
int ar[8][8];
int col[8],row[8],dpos[15],dneg[15],flag=0,scol[8],srow[8],sflag=0;
void putQueen(int,int);
void printBoard(void);
int main(){
  int j,n,a,b,i;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
    ar[i][j]=FREE;
    }
    col[i]=FREE;
    row[i]=FREE;
    dpos[i]=FREE;
    dneg[i]=FREE;
  }

  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    ar[a][b]=NOT_FREE;
  
  }
  putQueen(0,7);
  return 0;

}
void putQueen(int i,int n){
  int j,k;
  if(i==n+1){
    printBoard();
    return;
  }
  for(j=0;j<=n;j++){
    if(col[j]==NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+n]==NOT_FREE){
      continue;
    }
   

    row[i]=j;
    col[j]=NOT_FREE;
    dpos[j+i]=NOT_FREE;
    dneg[i-j+n]=NOT_FREE;
    putQueen(i+1,n);
    
    col[j]=FREE;
    dpos[i+j]=FREE;
    dneg[i-j+n]=FREE;
  }
}
void printBoard(void){
  int i,j;
  /* for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(col[i]==NOT_FREE){
	if(col[j]==NOT_FREE){
	  ar[i][j]=NOT_FREE;
	}
      }
    }
  }
  */
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(ar[i][j]==1){
	if(row[i]!=j)return;
      }
    }
  }
  
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(row[i]==j){
	printf("Q");
      }
      else printf(".");
    }
    printf("\n");
  }
}

