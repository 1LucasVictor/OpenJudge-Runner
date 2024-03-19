#include<stdio.h>
#include<stdlib.h>
#define FREE -1
#define NOT_FREE 1
#define TRUE 1
#define FALSE 0

int matrix[8][8];
int col[8],row[8],dpos[15],dneg[15];
void putQueen(int i);
void printBoard();

void initialize()
{
  int i;
  for(i=0;i<8;i++)
    {
      col[i]=FREE;
      row[i]=FREE;
     }
  for(i=0;i<15;i++)
    {
      dpos[i]=FREE;
      dneg[i]=FREE;
    }
 }
void printBoard()
{
  int i,j;
  for(i=0;i<8;i++)
    {
      for(j=0;j<8;j++)
        {
          if(matrix[i][j])
            {
              if(row[i]!=j)
                return;
            }
        }
    }
  for(i=0;i<8;i++)
    {
      for(j=0;j<8;j++)
        {
          if(row[i]==j)
            {
            printf("Q");
            }
            else printf(".");
        }
      printf("\n");
    }
}


   
void putQueen(int i)
{
  int j;
  if(i==8)
    {
    printBoard();
  return;
    }
  for(j=0;j<8;j++)
    {
      if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+7]==NOT_FREE)
        continue;
      row[i]=j;
      col[j]=dpos[i+j]=dneg[i-j+7]=NOT_FREE;
      putQueen(i+1);
      row[i]=col[j]=dpos[i+j]=dneg[i-j+7]=FREE;
    }
}
              
int main()
{
  int i,j,n,r,c;
  initialize();
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      matrix[i][j]=FALSE;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    {
      scanf("%d%d",&r,&c);
      matrix[r][c]=TRUE;
    }
  putQueen(0);
  return 0;
}

