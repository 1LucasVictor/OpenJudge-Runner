#include <stdio.h>
#define WHITE -1
#define F 0
#define RED 1
#define N 8
int A[N][N],row[N],col[N],dpos[2*N],dneg[2*N];
void First();
void FindQ(int);
void print();
char putQ(int, int);
int main() {
    int i, j, n, r, c;
    First();
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%d", &r, &c);
        A[r][c] = 1;
    }
    FindQ(0);
    return 0;
}
void First() {
    int i,j;
    for (i = 0; i < N; i++) {
        row[i] = col[i] = WHITE;
    }
    for (i = 0; i < N*2-1; i++) {
        dpos[i] = dneg[i] = WHITE;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = F;
        }
    }
}
void FindQ(int i) {
    int j;
    if (i == N) {
        //全パターン出力されることに
        print();
        return;
    }
    
    for (j = 0; j < N; j++) {
        //check
        if (col[j] == WHITE && dpos[i + j] == WHITE && dneg[i - j + (N - 1)] == WHITE) {
            //set
            //rowはQ(i,j)も兼ねる
            row[i] = j;
            col[j] = dpos[i + j] = dneg[i - j + (N - 1)] = RED;
            FindQ(i + 1);
            //reset
            row[i] = col[j] = dpos[i + j] = dneg[i - j + (N - 1)] = WHITE;
        }
    }
}

void print() {
    int i, j;
    /*
    for (i = 0; i < N; i++) {
        printf("%d", row[i]);
    }
    */
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            //(2,2)(5,3)のときパターンは1通り
            if (A[i][j]) {
                //printf("%d = %d\n", row[i], j);
                if (row[i] != j) {
                    return;
                }
            }
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%c", putQ(row[i],j));
        }
        printf("\n");
    }
    //printf("\n");
}
char putQ(int k,int j) {
    int i;
    if (k == j) {
        return 'Q';
    }
    return '.';
}
