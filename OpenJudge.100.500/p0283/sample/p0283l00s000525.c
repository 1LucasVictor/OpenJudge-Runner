#include<stdio.h>
#define NUM 8
#define FREE -1
#define NOT_FREE 1

void printBoard();
void putQueen(int);
void initialized();

int r[NUM],c[NUM],dpos[2*NUM-1],dneg[2*NUM-1];
int a[NUM][NUM];

int main(){
  int i,j,n,row,col;

  initialized();

  for(i=0;i<NUM;i++){
    for(j=0;j<NUM;j++){
      a[i][j]=0;
    }
  }


  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    scanf("%d%d",&row,&col);
    a[row][col]=1;
    
  }

  putQueen(0);


  return 0;
}


void printBoard(){
  int i,j;

  for(i=0;i<NUM;i++){
    for(j=0;j<NUM;j++){
      if(a[i][j]){
	if(r[i]!=j) return;
      }
    } 
  }
  for(i=0;i<NUM;i++){
    for(j=0;j<NUM;j++){
      if(r[i]==j)
	printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  
}

void putQueen(int i){
  int j;

  if(i==NUM){
    printBoard();
    return;
  }

  for(j=0;j<NUM;j++){
    if(c[j]== NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+NUM-1]==NOT_FREE) continue;
    r[i]=j;
    c[j]=dpos[i+j]=dneg[i-j+NUM-1]=NOT_FREE;
  

    putQueen(i+1);
    r[i]=c[j]=dpos[i+j]=dneg[i-j+NUM-1]=FREE;
  }
}

void initialized(){
  int i;

  for(i=0;i<NUM;i++){
    r[i]=FREE;
    c[i]=FREE;
  }

  for(i=0;i<2*NUM-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
}

