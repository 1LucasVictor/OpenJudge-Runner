
#include <stdio.h>
#include <stdlib.h>

#define NIL_POSITION -1
#define FREE_BOARD 1
#define NOT_FREE_BOARD 0
#define BOARD_LENGTH 8
#define BOARD_DIAG_SIZE 15 // 2 * BOARD_LENGTH - 1

typedef struct {
    int row[BOARD_LENGTH];
    int col[BOARD_LENGTH];
    int dpos[BOARD_DIAG_SIZE];
    int dneg[BOARD_DIAG_SIZE];
} QueenBoard;

void printBoard(QueenBoard board) {
    int r, c;
    
    for (r = 0; r < BOARD_LENGTH; r++) {
        for (c = 0; c < BOARD_LENGTH; c++)
            printf("%c", (board.row[r] == c ? 'Q' : '.'));
        
        printf("\n");
    }
}
int isNotAvailable(QueenBoard board, int i, int j) {
//    printf("i : %d, j : %d, C: %cF, D+: %cF, D-: %cF\n", 
//            i, j, 
//            (board.col[j] ? ' ' : 'N'), 
//            (board.dpos[i+j] ? ' ' : 'N'), 
//            (board.dneg[i-j+BOARD_LENGTH-1] ? ' ' : 'N'));
//    
    return (board.col[j] == NOT_FREE_BOARD || 
            board.dpos[i+j] == NOT_FREE_BOARD || 
            board.dneg[i-j+BOARD_LENGTH-1] == NOT_FREE_BOARD);
}
//void insertQueen(QueenBoard board, int r, int c) {
//    board.row[r] = c;
//    board.col[c] = board.dpos[r+c] = board.dneg[r-c+BOARD_LENGTH-1] = NOT_FREE_BOARD;
//}
//
//void removeQueen(QueenBoard board, int r, int c) {
//    board.row[r] = NIL_POSITION;
//    board.col[c] = board.dpos[r+c] = board.dneg[r-c+BOARD_LENGTH-1] = FREE_BOARD;
//}

void putQueen(QueenBoard board, int i) {
    if (i == BOARD_LENGTH) {
//        printf("to the end");
        printBoard(board);
        return;
    }
//    printf("i : %d\n", i);
//    printBoard(board);
//    printf("-----\n");
    
    int j, i2;
    for (j = 0; j < BOARD_LENGTH; j++) {
        if ( isNotAvailable(board, i, j) )
            continue;
        // put a queen at (i, j)
        board.row[i] = j;
        board.col[j] = board.dpos[i+j] = board.dneg[i-j+BOARD_LENGTH-1] = NOT_FREE_BOARD;
        
        // try the next row
        for (i2 = i + 1; i2 < BOARD_LENGTH; i2++) 
            if (board.row[i2] == NIL_POSITION) 
                break;
//        printf("i2: %d, GOING INWARD\n", i2);
        putQueen(board, i2);
//        printf("i : %d, BACK OUT\n", i);
        // remove the queen at (i, j) for backtracking
        board.row[i] = NIL_POSITION;
        board.col[j] = board.dpos[i+j] = board.dneg[i-j+BOARD_LENGTH-1] = FREE_BOARD;
    }
}

int main(int argc, char** argv) {
    int nQueensCame;
    scanf("%d", &nQueensCame);
    
    QueenBoard board;
    int i, j, r, c;
    
    for (i = 0; i < BOARD_LENGTH; i++) {
        board.row[i] = NIL_POSITION;
        board.col[i] = FREE_BOARD;
    }
    for (j = 0; j < BOARD_DIAG_SIZE; j++) {
        board.dpos[j] = FREE_BOARD;
        board.dneg[j] = FREE_BOARD;
    }
    
    for (i = 0; i < nQueensCame; i++) {
        scanf("%d %d", &r, &c);
        
        board.row[r] = c;
        board.col[c] = board.dpos[r+c] = board.dneg[r-c+BOARD_LENGTH-1] = NOT_FREE_BOARD;
//        printf("r+c: %d\n", r+c);
//        printf("isNotAvailable(board, 4, 7): %d\n", isNotAvailable(board, 4, 7));
//        printf("isNotAvailable(board, 2, 5): %d\n", isNotAvailable(board, 2, 5));
//        printf("isNotAvailable(board, 3, 5): %d\n", isNotAvailable(board, 3, 5));
//        printf("isNotAvailable(board, 4, 5): %d\n", isNotAvailable(board, 4, 5));
//        printf("isNotAvailable(board, 5, 5): %d\n", isNotAvailable(board, 5, 5));
//        printf("isNotAvailable(board, 6, 5): %d\n", isNotAvailable(board, 6, 5));
//        printf("isNotAvailable(board, 7, 5): %d\n", isNotAvailable(board, 7, 5));
    }
    
//    printBoard(board);
//    printf("isNotAvailable(board, 2, 2): %d\n", isNotAvailable(board, 2, 2));
//    printf("isNotAvailable(board, 5, 1): %d\n", isNotAvailable(board, 5, 1));
//    printf("isNotAvailable(board, 4, 1): %d\n", isNotAvailable(board, 4, 1));
    
    for (i = 0; i < BOARD_LENGTH; i++) 
        if (board.row[i] == NIL_POSITION) 
            break;
    putQueen(board, i);
    
    return (EXIT_SUCCESS);
}


