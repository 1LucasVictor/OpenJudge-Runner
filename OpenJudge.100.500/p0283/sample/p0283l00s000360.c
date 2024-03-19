#include<stdio.h>

#define Q -1
#define WHITE 0
#define N 8

int k;
int board[N][N];
int temp[N];

void search(int, int);

int findr(int);
int find(int, int);
void output();

int main()
{
  int r, c;
  int i, j;

  for(i = 0; i < N; i++)
    {
      temp[i] = 0;
     for(j = 0; j < N; j++)
       {
	 board[i][j] = WHITE;
       }
    }
  
  scanf("%d", &k);
  
  for(i = 0; i < k; i++)
    {
      scanf("%d %d", &r, &c);
      board[r][c] = Q;
      temp[r] = 1;
    }
  
  search(0, 0);

  return 0;
}

int findr(int r)
{
      if(temp[r])
	{
	  return 1;
	}
  return 0;
}

  
int find(int r, int c)
{
  int i, j;

  //縦
  for(i = 0; i < N; i++)
    {
      if(board[i][c] == Q)return 1;
    }
  
  //右上
  for(i = r+1, j = c-1; i >= 0 && j < N; i--, j++)
    {
      if(board[i][j] == Q)return 1;
    }
  //左下
   for(i = r-1, j = c+1; i < N && j >= 0; i++, j--)
    {
      if(board[i][j] == Q)return 1;
    }

   //右下
   for(i = r+1, j = c+1; i < N && j < N; i++, j++)
     {
       if(board[i][j] == Q)return 1;
     }
   //左上
   for(i = r-1, j = c-1; i >= 0 && j >= 0; i--, j--)
     {
       if(board[i][j] == Q)return 1;
     }
  
   return 0;
}

void search(int r, int c)
{
  int j, flag = 1;
  
  if(r == N)
    {
      output();
      return;
    }
  
  if(findr(r))
    {
	  search(r+1, 0);
    }
  else
    {
      for(j = c; j < N; j++)
	{
	  if(find(r, j))continue;
	  
	  board[r][j] = Q;
	  
	  search(r+1, 0);
	  
	  board[r][j] = WHITE;
	}
    }
}

void output()
{
  int i, j;

 for(i = 0; i < N; i++)
    {
     for(j = 0; j < N; j++)
       {
	 //printf("%2d ", board[i][j]);
	 if(board[i][j] == Q)printf("Q");
	 else printf(".");
       }
     printf("\n");
    }
 
 return;
}

