#include<stdio.h>
#include <stdbool.h>
/*
boolは、ブーリアン型(Boolean datatype)で、真理値の２つの値
bool true falseのシンボルが定義
*/
#define N 8
int row[N];
bool col[N],dpos[2*N-1],dneg[2*N-1];
bool X[N][N];
void initialize(){
    for(int i = 0;i < N;i++){
        row[i] = -1;
        col[i] = -1;
    }
    for(int i = 0;i < 2*N-1;i++){
        dpos[i] = -1;
        col[i] = -1;
    }
}
void printBoard(){
    for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            if(X[i][j]){
                if(row[i] != j) return;
            }
        }
    }
        for (int i = 0; i < N;i++){
            for (int j = 0; j < N;j++){
                printf("%c",(row[i] == j) ? 'Q' : '.');
            }
		printf("\n");
	}
}
void recursive(int i){
    if (i == N){
        printBoard();
        return;
    }
    for (int j = 0; j < N;j++){
        if(!col[j] && !dpos[i + j] && !dneg[i - j + N - 1]){
            row[i] = j;
			col[j] = dpos[i + j] = dneg[i - j + N - 1] = true;
            recursive(i + 1);
			row[i] = -1;
			col[j] = dpos[i + j] = dneg[i - j + N - 1] = false;
        }
    }
}

int main(){
    int i,k,r,c;
    initialize;
    for(i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            X[i][j] = false;
        }
    }
    scanf("%d",&k);
    for (i = 0; i < k;i++){
        scanf("%d %d",&r,&c);
        X[r][c] = true; 
    }
    recursive(0);
    return 0;
}

