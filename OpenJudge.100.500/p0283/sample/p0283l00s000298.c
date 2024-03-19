#include <stdio.h>
#include <string.h>
 
#define N 8
int a[N],n;
void printQueen(int q[N]) {
    int i, j, b[N][N] = { 0 };
    for (i = 0; i < N; i++) b[i][q[i]]=1;
    for (i = 0; i < N; i++,puts(""))
        for (j = 0; j < N; j++) fprintf(stdout, "%c", b[i][j] == 1 ? 'Q' : '.');
}
 
void cheak(int queen[N])
{
    int i,cnt=0;
    for (i = 0; i < N; i++) 
        if (queen[i] == a[i])cnt++;
    if (cnt == n) printQueen(queen);
}
 
void changeBoard(int board[N][N], int i, int j, int d)
{
    int k;
 
    for (k = 0; k < N; k++) {
        board[i][k] += d;
        board[k][j] += d;
    }
    if (i > j) {
        for (k = 0; k < N - (i - j); k++) {
            board[k + (i - j)][k] += d; 
        }
    }
    else {
        for (k = 0; k < N - (j - i); k++) {
            board[k][k + (j - i)] += d;
        }
    }
    if (i + j < N) {
        for (k = 0; k <= i + j; k++) {
            board[i + j - k][k] += d;
        }
    }
    else {
        for (k = i + j - N + 1; k < N; k++) {
            board[i + j - k][k] += d;
        }
    }
}
 
void setQueen(int queen[N], int board[N][N], int i)
{
    int j;
 
    if (i == N) { 
        cheak(queen);
        return;
    }
 
    for (j = 0; j < N; j++) {
        if (board[i][j] == 0) {
            queen[i] = j;
            changeBoard(board, i, j, +1);
            setQueen(queen, board, i + 1);
            changeBoard(board, i, j, -1);
        }
    }
}
 
void findSolution()
{
    int queen[N];
    int board[N][N];
 
    memset(board, 0, sizeof(board));
    setQueen(queen, board, 0);
}
int main()
{
    int i=0, h,w;
    memset(a, -1, sizeof(a));
    fscanf(stdin, "%d", &n);
    while (i<n) fscanf(stdin, "%d%d", &h, &w), a[h] = w,i++;
    findSolution();
    return 0;
}