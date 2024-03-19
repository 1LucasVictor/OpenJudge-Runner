#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE -2
#define TRUE -3
#define FALSE -4

int row[N], col[N], dpos[2*N-1], dneg[2*N-1], x[N][N];
//row: x = i
//col: x = j
//dpos: x = i + j
//dneg: x = i - j + (N - 1)

void putQueen(int);
void printBoard(void);


int main() {
  int k, i, j, r, c;

  for ( i=0; i<(2*N-1); i++ ) {
    row[i] = col[i] = dpos[i] = dneg[i] = FREE;
    for ( j=0; j<N; j++ ) x[i][j] = FALSE;
  }

  scanf( "%d" , &k );
  for ( i=0; i<k; i++ ) {
    scanf( "%d %d" , &r , &c );
    x[r][c] = TRUE;
  }

  putQueen(0);

  return 0;
}


void putQueen(int i) {
  int j;

  if ( i == N ) {
    printBoard();
    return;
  }

  for ( j=0; j<N; j++ ) {
    if ( (col[j] == NOT_FREE)
	 || (dpos[i+j] == NOT_FREE)
	 || (dneg[i-j+N-1] == NOT_FREE) ) continue;
    // put a queen at (i, j)
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    // try the next row
    putQueen(i+1);
    // remove the queen at (i, j) for backtracking
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

void printBoard(void) {
  int i, j;

  for ( i=0; i<N; i++ )
    for ( j=0; j<N; j++ )
      if((x[i][j] == TRUE) && (row[i] != j)) return;
   
  for ( i=0; i<N; i++ ) {
    for ( j=0; j<N; j++ ) {
      if ( row[i] == j ) printf( "Q" );
      else printf( "." );
    }
    printf( "\n" );
  }
}

