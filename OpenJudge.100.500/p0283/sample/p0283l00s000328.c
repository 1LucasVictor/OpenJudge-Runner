#include<stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE -2

int row[N], col[N], dpos[2*N-1], dneg[2*N-1];
int Q[N][N];

void initialize()
{
  int i, j;
  
  for( i=0; i<N; i++ )
    {
      row[i] = FREE;
      col[i] = FREE;
    }
  for( i=0; i<2*N-1; i++ )
    {
      dpos[i] = FREE;
      dneg[i] = FREE;
    }

}

void printBoard()
{
  int i, j;

  for( i=0; i<N; i++ )
    {
      for( j=0; j<N; j++ )
	{
	  if( Q[i][j] )
	    {
	      if( row[i] != j ) return;
	    }
	}
    }
  
  for( i=0; i<N; i++ )
    {
      for( j=0; j<N; j++ )
	{
	  if( row[i] == j ) printf("Q");
	  else printf(".");
	  if( j == N-1 ) printf("\n");
	}
    }

}


void putQueen( int i )
{
  int j;

  if( i == N )
    {
      printBoard();
      return;
    }

  for( j=0; j<N; j++ )
    {
      if( col[j] == NOT_FREE || dpos[i+j] == NOT_FREE ||
	  dneg[i-j+N-1] == NOT_FREE ) continue;

      row[i] = j;  /*put a queen at (i, j)*/
      col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;  

      putQueen(i+1); /*try the next row*/
      
      col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
    }
  
}


int main()
{
  int i, j, k, r, c;

  initialize();

  for( i=0; i<N; i++ )
    {
      for( j=0; j<N; j++ )
	{
	  Q[i][j] = 0;
	}
    }
  
  scanf("%d", &k);

  for( i=0; i<k; i++ )
    {
      scanf("%d%d", &r, &c);
      Q[r][c] = 1;
    }

  putQueen(0);

  return 0;
}

