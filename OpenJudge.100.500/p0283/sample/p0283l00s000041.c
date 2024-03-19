#include <stdio.h>
#define N 8
#define T 1
#define F -1

int B[N][N],row[N],col[N],dpos[2*N-1],dneg[2*N-1];

void printboard(){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(B[i][j]==T){
                if(row[i]!=j) return;
            }
       }
    }
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(row[i]==j) printf("Q");
            else          printf(".");
        }
        printf("\n");
    }
}

void backtrack(int i){
  int j;

  if(i==N){
    printboard();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j]==T||dpos[i+j]==T||dneg[i-j+N-1]==T)    continue;
    row[i] =j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=T;
    backtrack(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=F;
  }
}

int main(void){
    int i,j,k,r,c;
    
    for(i=0;i<N;i++){
        row[i]=col[i]=F;
        for(j=0;j<N;j++) B[i][j]=F;
    }
    
    for(i=0;i<2*N-1;i++) dpos[i]=dneg[i]=F; 
    
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d %d",&r,&c);
        B[r][c]=T;
    }
    
    backtrack(0);    
    
    return 0;
}

