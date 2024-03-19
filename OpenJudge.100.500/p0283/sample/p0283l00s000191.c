#include<stdio.h>

#define N 8
#define NOT_FREE 1
#define FREE 0

void putQueen(int);
void printBoard(void);

int col[8],dpos[1000]={0},dneg[1000]={0},row[8]={-1},col[8];

int r[8],c[8],k,A[8][8];

int main(){

  int i,j;

  /* for(i=0;i<N;i++){
    for(j=0;j<N;j++){

      col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;

    }
    row[i]=-1;   
  }*/

  scanf("%d",&k);

  for(i=0;i<k;i++){

    scanf("%d%d",&r[i],&c[i]);

    // row[r[i]]=NOT_FREE;
    // col[c[i]]=NOT_FREE;

    A[r[i]][c[i]]=NOT_FREE;
    
    
  }

  putQueen(0);

   return 0;

}

void putQueen(int i){

  int j,m,sirusi=0;

  if(i==N){

    //  printf("wa-i\n");
    printBoard();
    return ;
  }

  // for(m=0;m<k;m++){
  // printf("r[m]:%d,c[m]:%d\n",r[m],c[m]);
  // }
    

  for(j=0;j<N;j++){

    // printf("<count>i:%d,j:%d,[i+j]:%d,[i-j+N-1]:%d,col[j]:%d,dpos[i+j]:%d,dneg[i-j+N-1]:%d\n",i,j,i+j,i-j+N-1,col[j],dpos[i+j],dneg[i-j+N-1]);

    if(col[j]==NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1]==NOT_FREE) continue;

    //printf("wa-i\n")
    
   

    //printf("sirusi %d\n",sirusi);
      
   

      row[i] = j;
      col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
      
      
      //printf("i:%d,j:%d\n",i,j);
      // printf("row:%d,col:%d\n",row[i],col[j]);

      //if(i==4&&j==6) printf("[i+j]:%d,[i-j+N-1]:%d,dpos:%d,dneg:%d\n",i+j,i-j+N-1,dpos[i+j],dneg[i-j+N-1]);
      
      
      putQueen(i+1);
      
      col[j]=dpos[i+j]=dneg[i-j+N-1] = FREE;
    
      
    
  }

    

}

void printBoard(void){

  int i,j;

  // printf("wa-i\n");

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i][j]==NOT_FREE && row[i]!=j) return;
    }
  }
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){

      if(row[i]==j) printf("Q");
      else printf(".");

    }
    printf("\n");
  }

  return ;

}