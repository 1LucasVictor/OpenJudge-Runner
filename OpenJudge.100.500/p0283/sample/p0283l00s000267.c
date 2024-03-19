#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N], col[N], dpos[2*N-1], dneg[2*N-1], X[N][N];

void initialize(void);
void putQueen(int);
void printBoard(void);

int main()
{
  int i, j, k, r, c;

  initialize();
  
   for(i = 0; i < N; i++)
    {
      for(j = 0; j < N; j++)
	{
	  X[i][j] = -1;
	}
    }

  scanf("%d",&k);

  for(i = 0; i < k; i++)
    {
      scanf("%d %d",&r,&c);
      X[r][c] = 1;
    }

  putQueen(0);
  
  return 0;
}

void initialize(void)
{
  int i;
  
  for(i = 0; i < N; i++)
    {
      row[i] = FREE;
      col[i] = FREE;
    }
  for(i = 0; i < 2*N-1; i++)
    {
      dpos[i] = FREE;
      dneg[i] = FREE;
    }
}

void putQueen(int i)
{
  int j;
  
  if( i == N )
    {
      printBoard();
      return;
    }

  for(j = 0; j < N; j++)
    {
      if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE)continue;

      row[i] = j;
      col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
      putQueen(i+1);
      col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
    }
}

void printBoard(void)
{
  int i, j;
  for(i = 0; i < N; i++)
    {
      for(j = 0; j < N; j++)
	{
	  if(X[i][j] == 1)
	    {
	      if(row[i] != j)return;
	    }
	}
    }

  for(i = 0; i < N; i++)
    {
      for(j = 0; j < N; j++)
	{
	  if(row[i] == j)printf("Q");
	  else printf(".");
	}
      printf("\n");
    }
}

