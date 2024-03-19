#include<stdio.h>

int backup[8][8][8], data[8][8], cnt = 0;

void input(int);
void remain(int, int);
void undo();
void initialize();
int process(int);
int check();
void listprint();
void debug();
int check2();

int main(){

  int n;

  scanf("%d",&n);

  initialize();
  input(n);
  process(n);
  listprint();

  return 0;
}

void debug()
{
  int i, j;

  printf("*cnt = %d*\n",cnt);
  for(i = 0; i < 8; i++)
    {
      for(j = 0; j < 8; j++)
	{
	  if(data[i][j] == -2)printf("N");
	  else if(data[i][j] == -1)printf(".");
	  else printf("Q");
	}
      printf("\n");
    }
  printf("-----------------\n");
}

int process(int n)
{
  int i, j;
  
  //debug();
  
  if(check() == 1)return 0;
  if(check() == 0 && check2() == 1 && cnt == 8)return 1;
  //else return 0;
  
  for(i = 0; i < 8; i++)
    {
      for(j = 0; j < 8; j++)
	{
	  if(data[i][j] == -2)
	    {
	      remain(i,j);
	      if(process(n) == 1)return 1;
	      undo();
	    }
	}
    }
  return 0;
}

void undo()
{
  int i, j;

  cnt--;

  for(i = 0; i < 8; i++)
    {
      for(j = 0; j < 8; j++)
	{
	  backup[cnt][i][j] = -2;
	  data[i][j] = backup[cnt-1][i][j];
	}
    }
}

int check2()
{
  int i, j, c = 0;

  for(i = 0; i < 8; i++)
    {
      for(j = 0; j < 8; j++)
	{
	  if(data[i][j] >= 0)c++;
	}
    }
  if(c == 8)return 1;
  else return 0;

}

int check()
{
  int i, j, k, fl_v = 0, fl_w = 0, fl_1 = 0, fl_2 = 0;

  for(i = 0; i < 8; i ++)
    {
      for(j = 0; j < 8; j++)
	{
	  if(data[i][j] == -1)fl_v++;
	  else if(data[i][j] >= 0)fl_v += 10;
	  if(data[j][i] == -1)fl_w++;
	  else if(data[j][i] >= 0)fl_w += 10; 
	}
      if((fl_v == 8 || fl_v >= 20) || (fl_w == 8 || fl_w >= 20))return 0;
      fl_v = 0, fl_w = 0;
    }
  for(i = 7; i >= 0; i--)
    {
      for(j = i; j < 8; j++)
	{
	  if(data[j][j-i] >= 0)fl_1++;
	}
      if(fl_1 > 1)return 1;
      fl_1 = 0;
    }
  for(i = 1; i <= 7; i++)
    {
      for(j = 0; j < 8 - i; j++)
	{
	  if(data[i+j][j] >= 0)fl_1++;
	}
      if(fl_1 > 1)return 1;
      fl_1 = 0;
    }

  for(i = 0; i < 8; i++)
    {
      for(j = 0; j <= i; j++)
	{
	  if(data[i-j][j] >= 0)fl_2++;
	}
      if(fl_2 > 1)return 1;
      fl_2 = 0;
    }
  for(i = 7; i > 0; i--)
    {
      for(j = 8 - i; j < i; j++)
	{
	  if(data[8-j][j] >= 0)fl_2++;
	}
      if(fl_2 > 1)return 1;
      fl_2 = 0;
    }
    return 0; 
}



void input(int n)
{
  int i, v, w;

  for(i = 0; i < n; i++)
  {
    scanf("%d%d",&v,&w);
    remain(v, w);
  }
}

void remain(int v, int w)
{
  int i, j;

  for(i = 0; i < 8; i++)
  {
    if(data[v][i] < 0)data[v][i] = -1;
    if(data[i][w] < 0)data[i][w] = -1;

    for(j = 1; j < 8; j++)
    {
      if(v + j < 8 && w + j < 8 && data[v + j][w + j] == -2)data[v + j][w + j] = -1;
      if(v - j >= 0 && w + j < 8 && data[v - j][w + j] == -2)data[v - j][w + j] = -1;
      if(v + j < 8 && w - j >= 0 && data[v + j][w - j] == -2)data[v + j][w - j] = -1;
      if(v - j >= 0 && w - j >= 0 && data[v - j][w - j] == -2)data[v - j][w - j] = -1;
    }
  }
  data[v][w] = cnt;
  for(i = 0; i < 8; i++)
  {
    for(j = 0; j < 8; j++)backup[cnt][i][j] = data[i][j];
  }
  cnt++;
}

void initialize()
{
  int i, j, k;

  for(i = 0; i < 8; i++)
  {
    for(j = 0; j < 8; j++)
    {
      for(k = 0; k < 8; k++)backup[k][i][j] = -2;
      data[i][j] = -2;
    }
  }
}

void listprint()
{
  int i, j;

  for(i = 0; i < 8; i++)
    {
      for(j = 0; j < 8; j++)
	{
	  if(data[i][j] == -2)printf("N");
	  else if(data[i][j] == -1)printf(".");
	  else printf("Q");
	}
      printf("\n");
    }
}

