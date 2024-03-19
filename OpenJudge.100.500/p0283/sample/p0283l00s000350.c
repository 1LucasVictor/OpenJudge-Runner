#include<stdio.h>
#define MAX 8
#define FREE 1
#define NFREE -1

int ltr[MAX],ttb[MAX];
int ttl[2*MAX-1],ttr[2*MAX-1];

int A[MAX][MAX];

void intia()
{
  int i;
  for(i=0;i<MAX;i++)
    {
      ltr[i]=FREE;
      ttb[i]=FREE;
    }
  for(i=0;i<2*MAX-1;i++)
    {
      ttl[i]=FREE;
      ttr[i]=FREE;
    }
}

void printBro()
{
  int i,j;
  for(i=0;i<MAX;i++)
    {
      for(j=0;j<MAX;j++)
	{
	  if(A[i][j]==1)
	    {
	      if(ltr[i]!=j)return;
	    }
	}
    }
  
  for(i=0;i<MAX;i++)
    {
      for(j=0;j<MAX;j++)
	{
	  if(ltr[i]==j)printf("Q");
	  if(ltr[i]!=j)printf(".");
	}
      printf("\n");
    }
}

void recur(int k)
{
  int i;
  if(k==MAX)
    {
      printBro();
      return;
    }
  for(i=0;i<MAX;i++)
    {
      if(NFREE==ttb[i] || NFREE==ttl[k+i] || NFREE==ttr[k-i+MAX-1])continue;
      ltr[k]=i;
      ttb[i]=ttl[k+i]=ttr[k-i+MAX-1]=NFREE;
      
      recur(k+1);
      ltr[k]=ttb[i]=ttl[k+i]=ttr[k-i+MAX-1]=FREE;
    }
}

int main()
{
  int i,j,key;
  intia();
  for(i=0;i<MAX;i++)
    {
      for(j=0;j<MAX;j++) A[i][j]=-1;
    }
  scanf("%d",&key);
  for(i=0;i<key;i++)
    {
      int row,column;
      scanf("%d %d",&row,&column);
      A[row][column]=1;
    }
  recur(0);
  return 0;
}