#include <stdio.h>

#define FREE -1
#define NOT_FREE 1
#define TRUE 1
#define FALSE 0
#define N 8

int row[8];
int col[8];
int dpos[2 * N - 1];
int dneg[2 * N - 1];

int Board[N][N];

void putQueen(int);
void printBoard();

int main(){
        int i, j, k, r, c;

        for(i = 0 ; i < N ; i++){
                row[i] = FREE;
                col[i] = FREE;
        }
        for(i = 0; i < 2*N - 1 ; i++){
                dpos[i] = FREE;
                dneg[i] = FREE;
        }
        for(i=0; i < N; i++)for(j = 0 ; j < N ;j++)Board[i][j] = FALSE;

        scanf("%d", &k);
        for(i = j = 0 ; i < k ; i++){
                scanf("%d %d", &r, &c);
                Board[r][c] = TRUE;
        }
        
        putQueen(0);

        return 0;
}

void putQueen(int x){
        int y, i, j;
        if(x == N){
                printBoard();
                return;
        }

        for(y = 0 ; y < N ; y++){
                        if(col[y] == NOT_FREE || dpos[x + y] == NOT_FREE || dneg[x - y + N - 1] == NOT_FREE)continue;
                        row[x] = y;
                        col[y] = dpos[x+y] = dneg[x - y + N-1] = NOT_FREE;
                        putQueen(x+1);
                        row[x] = col[y] = dpos[x+y] = dneg[x - y + N-1] = FREE; 
        }
}

void printBoard(){
        int i, j;
        for(i = 0 ; i < N ; i++){
                for(j = 0 ; j < N ; j++){
                        if(Board[i][j])if(row[i] != j)return;
                }
        }
        for(i = 0 ; i < N ; i++){
                for(j = 0 ; j < N ; j++){
                        if(row[i] == j)printf("Q");
                        else printf(".");
                }
                printf("\n");
        }
}

