
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
#define DIA_SIZE 15 //2*SIZE-1
#define NIL -1
#define FREE 1
#define NOT_FREE 0

/*
 * 
 */

int col[SIZE], row[SIZE], dpos[DIA_SIZE], dneg[DIA_SIZE];

void printBoard();
void putQueen(int i);

int main(int argc, char** argv) {
    int k, r, c, i;
    
    for (int i = 0; i < SIZE; ++i)
    {
        row[i] = NIL;
        col[i] = FREE;
//        for (int ix = 0; ix < SIZE; ++ix) 
    }
    for (int j = 0; j < DIA_SIZE; ++j)
    {
        dpos[j] = FREE;
        dneg[j] = FREE;
    }
    
    scanf("%d", &k);
    for (int jx = 0; jx < k; ++jx)
    {
        scanf("%d %d", &r, &c);
        row[r] = c;
        col[c] = dpos[r+c] = dneg[r-c+SIZE-1] = NOT_FREE;
    }
    
    for (i = 0; i < SIZE; ++i)
        if (row[i] == NIL) break;
    putQueen(i);
    
    return (EXIT_SUCCESS);
}

void printBoard()
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j) printf("%c", (row[i] == j) ? 'Q' : '.');
        printf("\n");
    }
}

void putQueen(int i)
{
    int ix;
    if (i == SIZE) 
    {
        printBoard();
        return;
    }
    
    for (int j = 0; j < SIZE; ++j)
    {
        if (col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+SIZE-1] == NOT_FREE)
            continue;
        row[i] = j;
        col[j] = dpos[i+j] = dneg[i-j+SIZE-1] = NOT_FREE;
        for (ix = i+1; ix < SIZE; ++ix)
            if (row[ix] == NIL) break;
        putQueen(ix);
        row[ix] = NIL;
        col[j] = dpos[i+j] = dneg[i-j+SIZE-1] = FREE;
    }
}

