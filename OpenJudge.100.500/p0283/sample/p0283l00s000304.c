#include <stdio.h>

#define N 8

void putQueen(int);
void printBoard(void);

int col[8] = {};
int row[8];
int dpos[15] = {};
int dneg[15] ={};

int main(){
    int k,r,c;
    int i;

    // init
    for(i=0;i<N;i++){
        row[i]=-1;
    }

    scanf("%d", &k);
    for(i=0;i<k;i++){
        scanf("%d %d", &r,&c);
        row[r]=c;
        col[c]=dpos[r+c]=dneg[r-c+N-1]=1;
    }

    putQueen(0);

    return 0;

}

void putQueen(int i){
    int j;

    if(i==N) {
        printBoard();
    }
    else if(row[i]!=-1) putQueen(i+1);
    else{
        for(j=0;j<N;j++){
            if(col[j]==1 || dpos[i+j]==1 || dneg[i-j+N-1]==1) continue;
            // put a queen at (i, j)
            row[i] = j;
            col[j]=dpos[i+j]=dneg[i-j+N-1]=1;
            // try the next row
            putQueen(i+1);
            // remove the queen at (i,j) for backtracking
            row[i]=-1;
            col[j]=dpos[i+j]=dneg[i-j+N-1]=0;
        }
    }
}

void printBoard(void){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(row[i]==j) printf("Q");
            else printf(".");
        }
        printf("\n");
    }
}
