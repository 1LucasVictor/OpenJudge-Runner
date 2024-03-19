#include<stdio.h>
#include<stdlib.h>
#define MAX 8
int first[MAX];
int rowStat[MAX];//the column value of queen in this row
int colStat[MAX];//can be put: 0
int dPosStat[2*MAX-1];
int dNegStat[2*MAX-1];
void init(void);
void putQueen(int);
int setQueen(int,int,int);
void removeQueen(void);
void printBoard(void);
int main(void)
{
  int i;//counter
  int firstNum;
  int row,col;
  init();
  scanf("%d",&firstNum);
  for(i=0;i<firstNum;i++)
    {
      scanf("%d%d",&row,&col);
      rowStat[row]=col;
      colStat[col]=dPosStat[row+col]=dNegStat[col-row+MAX-1]=1;
      first[row]=1;
    }
  putQueen(0);
  return 0;
}
void init(void)
{
  int i,j;//counter
  for(i=0;i<MAX;i++)
    {
      first[i]=0;
      rowStat[i]=-1;
      colStat[i]=0;
    }
  for(i=0;i<2*MAX+1;i++) dPosStat[i]=dNegStat[i]=0;
}
void putQueen(int i)
{
  int j;//counter
  //printf("putQueen(%d)\n",i);
  if(i==MAX)
    {
      printBoard();
      return;
    }
  if(first[i]==0)
    {
      for(j=0;j<MAX;j++)
        {
          if(colStat[j]==0&&dPosStat[i+j]==0&&dNegStat[j-i+MAX-1]==0)
            {
              rowStat[i]=j;
              colStat[j]=dPosStat[i+j]=dNegStat[j-i+MAX-1]=1;
              //printf("put(%d,%d)\n",i,j);
              putQueen(i+1);
              //printf("remove(%d,%d)\n",i,j);
              colStat[j]=dPosStat[i+j]=dNegStat[j-i+MAX-1]=0;
            }
        }
    }
  else putQueen(i+1);
}
void printBoard(void)
{
  int i,j;//counter
  for(i=0;i<MAX;i++)
    {
      for(j=0;j<MAX;j++)
        {
          if(rowStat[i]==j) printf("Q");
          else printf(".");
        }
      printf("\n");
    }
}
