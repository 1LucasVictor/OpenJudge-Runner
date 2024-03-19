#include <stdio.h>
#define  N 8
#define NOT_FREE 1
#define FREE -1
#define EXIST 5
#define NOT_EXIST -5

void putQueen( int i );
void printBoard( void );
int dpos[2*N], dneg[2*N], n, row[N], col[N], A[N][N];

int main(){
    int i, k, j, l;

    //initialize
    for( i=0; i<N; i++ ){ 
	row[i] = FREE;
	col[i] = FREE;
    }
    for( i=0; i<2*N-1; i++ ){
	dpos[i] = FREE;
	dneg[i] = FREE;
    }
    for( i=0; i<N; i++ )
	for( j=0; j<N; j++ )
	    A[i][j] = NOT_EXIST;

    //input
    scanf("%d", &n);
    for( i=0; i<n; i++ ){
	scanf("%d%d", &l, &k);
	A[l][k] = EXIST;
    }

    //calculate
    putQueen( 0 );

    return 0;
}
//-------------------------------------------------------
void printBoard( void ){
    int i, j;
    
    //check
    for( i=0; i<N; i++ )
	for( j=0; j<N; j++ )
	    if( A[i][j] == EXIST )
		if( row[i] != j ) 
		    return;
    //print
    for( i=0; i<N; i++ ){
	for( j=0; j<N; j++ ){
	    if( row[i] == j ) printf("Q");
	    else printf(".");
	}
	printf("\n");
    }
}

void putQueen( int i ){
    int j;
    
    //we could put a queen on the board
    if( i==N ){
	printBoard();
	return ;
    }

    for( j=0; j<N; j++ ){
	//check whether (i,j) is under the queen's control.
	if( col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE ) continue;
	row[i] = j;
	col[j] = NOT_FREE;
	dpos[i+j] = NOT_FREE;
	dneg[i-j+N-1] = NOT_FREE;

	//I will try next row.
	putQueen( i+1 );
	//I will remove the queen on (i, j)
	row[i] = FREE;
	col[j] = FREE;
	dpos[i+j] = FREE;
	dneg[i-j+N-1] = FREE;
    }
    //I could not put queen.
}

