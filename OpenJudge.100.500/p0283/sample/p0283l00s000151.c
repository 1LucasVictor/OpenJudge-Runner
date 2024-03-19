#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1
void initialize();
void putQueen(int i);
void printBoard();

int Board[N][N];
int row[N],col[N],dpos[15],dneg[15];

int main(){
    int i,j,k,l;
    
    initialize();
    
    scanf("%d",&k);
    for(l=0;l<k;l++){
        scanf("%d%d",&i,&j);
        Board[i][j]=1;
    }
    putQueen(0);
    return 0;
}


void initialize(){
    int i,j;
    for(i=0;i<N;i++){
        row[i]=FREE;
        col[i]=FREE;
    }
    for(i=0;i<15;i++){
        dpos[i]=FREE;
        dneg[i]=FREE;
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            Board[i][j]=FREE;
        }
    }
}
void printBoard(){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(Board[i][j]==NOT_FREE){
                if(row[i]!=j) return;
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(row[i]==j) printf("Q");
            else printf(".");
        }
        printf("\n");
    }
}

void putQueen(int x){
    int j;
    if(x==N){
        printBoard();
        return;
    }
    for(j=0;j<N;j++){
        if(col[j]==NOT_FREE || dpos[x+j]==NOT_FREE || dneg[x-j+N-1]==NOT_FREE) continue;
        row[x]=j;
        col[j]=dpos[x+j]=dneg[x-j+N-1]=NOT_FREE;
        putQueen(x+1);
        row[x]=col[j]=dpos[x+j]=dneg[x-j+N-1]=FREE;
    }
}