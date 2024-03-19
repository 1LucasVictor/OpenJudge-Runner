#include<stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE 0

int col[N],dpos[15],dneg[15],row[N];
int p[N][N]={};

int printBoard(void){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(p[i][j]){
                if(row[i]!=j)return 0;
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(row[i]!=j)printf(".");
            else printf("Q");
        }
        printf("\n");
    }
    return 0;
}

void putQueen(int i){
    int j;
    if(i==N){
        printBoard();
        return;
    }
    for(j=0;j<N;j++){
        if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)continue;
        row[i]=j;
        col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
        putQueen(i+1);
        row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    }
}



int main(){
    int n,i,j;
    int x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        p[x][y]++;
    }
    putQueen(0);
    return 0;
}

