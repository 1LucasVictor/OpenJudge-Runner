#include <stdio.h>
#define N 8
#define TRUE 3
#define FALSE 2
#define FREE -1
#define NOT_FREE 1

void syokika(void);
void printboard(void);
void putQueen(int);

int X[N][N];
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];

int main()
{
  int i,j,k,r,c;
  
  syokika();

  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  X[i][j] = FALSE;
	}
    }
  scanf("%d",&k);
  for(i=0;i<k;i++)
    {
      scanf("%d%d",&r,&c);
      X[r][c] = TRUE;
    }

  putQueen(0);
  return 0;
}

void syokika()
{
  int i;
  for(i=0;i<N;i++)
    {
      row[i] = FREE;
      col[i] = FREE;
    }
  for(i=0;i<2*N-1;i++)
    {
      dpos[i] = FREE;
      dneg[i] = FREE;
    }
}

void printboard()
{
  int i,j;

  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  if(X[i][j] == TRUE)
	    {
	      if(row[i] != j) return;
	    }
	}
    }
  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  if(row[i] == j)printf("Q");
	  else printf(".");
	}
      printf("\n");
    }
  printf("\n");
}

void putQueen(int a)
{
  int j;
  if(a==N)
    {
      printboard();
      return;
    }
  for(j=0;j<N;j++)
    {
      if(col[j] == NOT_FREE || dpos[a+j] == NOT_FREE || dneg[a-j+N-1] == NOT_FREE) continue;

      row[a] = j;
      col[j] = dpos[a+j] = dneg[a-j+N-1] = NOT_FREE;

      putQueen(a+1);

      col[j] = dpos[a+j] = dneg[a-j+N-1] = FREE;
    }
}
	 