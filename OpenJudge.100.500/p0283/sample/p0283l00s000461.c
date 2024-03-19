#include <stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE -1
void putQueen(int);
void printBoard(void);
int row[N],col[N],dpos[2*N-1],dneg[2*N-1],A[N][N];
int main ()
{
  int i,j,n,b,c;
  scanf("%d",&n);
  
  for(i=0;i<N;i++)
    {
      row[i]=col[i]=FREE;
      for(j=0;j<N;j++)
	{
	  A[i][j]=0;
	}
    }
  for(i=0;i<2*N-1;i++)
    {
      dpos[i]=dneg[i]=FREE;
    }
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&b,&c);
      A[b][c]=2;
    }
  putQueen(0);
  return 0;
}

void putQueen(int i)
{
  int j;
  if(i==N)
    {
      printBoard();
      return;
    }
  
  for(j=0;j<N;j++)
    {
      if(col[j]==NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE) continue;
      
      row[i]=j;
      col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
      putQueen(i+1);
      col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    }
}

void printBoard(void)
{
  int i,j;
  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  if(A[i][j])
	    {
	      if(row[i]!=j) return;
	    }
	}
    }
  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  if(row[i]==j) printf("Q");
	  else printf(".");
	}
      printf("\n");
    }
}