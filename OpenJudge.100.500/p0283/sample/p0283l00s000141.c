#include<stdio.h>
#include<stdbool.h>
#define N 8
#define NOT_FREE -1
#define FREE 1

int A[N][N];
int k,row[N],col[N],dpos[2*N-1],dneg[2*N-1];

void printboard(){
    int i,j;
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(A[i][j]){
                if(row[i]!=j){
                    return;
                }
            }
        }
    }
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if (row[i]==j){
                printf("Q");
            }else{
                printf(".");
            }
        }
        printf("\n");
    }
}

void putQueen(int i){
    int j;
    
    if(i==N){
        printboard();
        return;
    }
    
    for(j=0;j<N;j++){
        if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1] == NOT_FREE){
            continue;
    }
        row[i]=j;
        col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
        putQueen(i+1);
        col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    }
}

int main(){
    int i,j,r,c;
    
    scanf("%d",&k);
    for(i=0;i<2*N-1;i++){
        dpos[i]=dneg[i]=FREE;
    }
    
    for(i=0;i<N;i++){
        col[i]=row[i]=FREE;
    }
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            A[i][j]=false;
        }
    }
    
    for(i=0;i<k;i++){
        scanf("%d %d",&r,&c);
        A[r][c]=true;
    }
    
    putQueen(0);
    
    return 0;
}

