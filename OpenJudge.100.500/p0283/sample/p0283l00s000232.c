#include<stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1
#define true 1
#define false 0

int row[N], col[N], dpos[2*N-1], dneg[2*N-1];
int X[N][N];

void printBoard(void);
void recursive(int);

int main()
{
  int i, j, k, r, c;

  for(i=0;i<N;i++)
    {
      row[i] = FREE, col[i] = FREE;
    }
  
  for(i=0;i<2*N-1;i++)
    {
      dpos[i] = FREE, dneg[i] = FREE;
    }

  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  X[i][j] = false;
	}
    }

  scanf("%d", &k);
  for(i=0;i<k;i++)
    {
      scanf("%d%d", &r, &c);
      X[r][c] = true;
    }

  recursive(0);
  
  return 0;
}

void printBoard(void)
{
  int i, j;

  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  if(X[i][j])
	    {
	      if(row[i] != j)return;
	    }
	}
    }
  
  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  if(row[i] != j)printf(".");
	  else printf("Q");
	}
      printf("\n");
    }
}

void recursive(int i)
{
  int j;
  
  if(i == N)
    {
      printBoard();
      return;
    }

  for(j=0;j<N;j++)
    {
      if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE)continue;
      row[i] = j; col[j] = NOT_FREE; dpos[i+j] = NOT_FREE; dneg[i-j+N-1] = NOT_FREE;
      recursive(i+1);
      row[i] = FREE; col[j] = FREE; dpos[i+j] = FREE; dneg[i-j+N-1] = FREE;
    }
}

