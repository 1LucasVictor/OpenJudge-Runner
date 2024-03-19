#include <stdio.h>

#define N 8

void Queen(int);

int n;
int bord[N][N];
int row[N];
int col[N];
int dpos[2*N-1];
int dneg[2*N-1];

int main()
{
  int i,x,y;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      //配列に２がはいっている場合、固定しているQが入っているようにする。

      scanf("%d%d",&x,&y);
      bord[x][y]=2;
      row[x]=2;
      col[y]=2;
      dpos[x+y]=2;
      dneg[x-y+N-1]=2;
    }
  
  Queen(0);

  for(x=0;x<N;x++)
    {
      for(y=0;y<N;y++)
	{
	  if(bord[x][y]==2||bord[x][y]==1)printf("Q");
	  else printf(".");
	}
      printf("\n");
    }
  
  return 0;
}

void Queen(int i)
{
  int j;
  static int hata;
  if(i==8)
    {
      hata=1;
      return;
    }

  for(j=0;j<8;j++)
    {
 
      if(bord[i][j]==2)//もし固定されたQがあったら
	{
	  Queen(i+1);
	}
      else//それ以外
	{
	  if(col[j]!=0 || dpos[i+j]!=0 || dneg[i-j+7]!=0 )
	    {
	      continue;
	    }
	  bord[i][j]=1;
	  
	  col[j]=1;
	  dpos[i+j]=1;
	  dneg[i-j+7]=1;
	  
	  Queen(i+1);

	  if(hata!=1)
	    {
	      col[j]=0;
	      dpos[i+j]=0;
	      dneg[i-j+7]=0;
	      bord[i][j]=0;
	    }
	}
      
    }
}

