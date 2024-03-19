#include<stdio.h>
#define NOT_FREE -1
#define N 8
#define FREE 1

int col[8];
int row[8];
int dneg[14];
int dpos[14];
int k[8],l,A;


void printboard(void)
{
  int i,j;
  for(i=0;i<8;i++)
    {
      for(j=0;j<8;j++)
	{
	  if(j!=row[i])printf(".");
	  else printf("Q");
	}
      printf("\n");
    }
}

void putQueen(int i)
{
 
  int j,c;
  if(i==N)
    {
      printboard();
      return;
    }
  for(j=0;j<A;j++)
    {
      if(i==k[j]) i++;
    }

  for(j=0;j<8;j++)
    {
      if(col[j]==NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE)
	{
	  continue;
	}
	     
      row[i]=j;
      col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
      putQueen(i+1);
      col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    }
}

    



int main()
{
  int i;

  for(i=0;i<N;i++)
    {
      col[i]=FREE;
      row[i]=FREE;

    }
 for(i=0;i<14;i++)
   {
           dneg[i]=FREE;
      dpos[i]=FREE;
   }
     
  scanf("%d",&A);
  for(i=0;i<A;i++)
    {
      scanf("%d%d",&k[i],&l);

      	  row[k[i]]=l;
	  col[l]=dpos[k[i]+l]=dneg[k[i]-l+N-1]=NOT_FREE;
    }
  putQueen(0);

  return 0;
}