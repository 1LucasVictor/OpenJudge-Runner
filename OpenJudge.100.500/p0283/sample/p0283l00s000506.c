#include <stdio.h>
 
#define N 8
#define FREE 1
#define NOT_FREE -1
 
void putQueen(int);
void printBoard(void);
 
int Q[N][N];
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
 
int main() {
    int i,j,k,a,b;
     
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++)
	  Q[i][j] = 0;
    }
    scanf("%d",&k);
    
    for(i=0; i<k; i++) {
        scanf("%d%d",&a,&b);
        Q[a][b] = FREE;
    }
     
    for(i=0; i<N; i++) {
        row[i] = FREE;
        col[i] = FREE;
    }
     
    for(i=0; i<20; i++) {
        dpos[i] = FREE;
        dneg[i] = FREE;
    }
     
    putQueen(0);
    return 0;
}
 
 
void putQueen(int i) {
    int j;
     
    if(i==N) {
        printBoard();
        return;
    }
     
    for(j=0; j<N; j++) {
        if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE) continue;
 
        row[i] = j;
        col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
	putQueen(i+1);
	row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
    }
}
 
void printBoard() {
    int i,j;
     
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            if(Q[i][j]) {
                if(row[i]!=j) return;
            }
        }
    }
     
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            if(row[i]==j) printf("Q");
            else printf(".");
        }
        printf("\n");
    }
}