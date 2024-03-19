#include <stdio.h>          
#include <stdbool.h>

#define MAX 8

const int nil = -1;
bool x[MAX][MAX];
int row[MAX];
bool col[MAX];
bool dpos[2 * MAX - 1], dneg[2 * MAX - 1];

void print_board()
{
  int i, j;

  for (i = 0; i < MAX; ++i)
    {
      for (j = 0; j < MAX; ++j)
	{
	  if (x[i][j] && row[i] != j)
	    return;
	}
    }

  for (i = 0; i < MAX; ++i)
    {
      for (j = 0; j < MAX; ++j)
	printf("%c", (row[i] == j) ? 'Q' : '.');

      printf("\n");
    }
}

void bktrack(int i)
{
  int j;

  if (i == MAX)
    {
      print_board();
      return;
    }

  for (j = 0; j < MAX; ++j)
    {
      if (!col[j] && !dpos[i + j] && !dneg[i - j + MAX - 1])
	{
	  row[i] = j;
	  col[j] = dpos[i + j] = dneg[i - j + MAX - 1] = true;

	  bktrack(i + 1);
	  row[i] = nil;
	  col[j] = dpos[i + j] = dneg[i - j + MAX - 1] = false;
	}
    }
}

void initialize_solve()
{
  int i, j;

  for (i = 0; i < MAX; ++i)
    {
      row[i] = nil;
      col[i] = false;

      for (j = 0; j < MAX; ++j)
	x[i][j] = false;
    }

  for (i = 0; i < 2 * MAX - 1; ++i)
    {
      dpos[i] = false;
      dneg[i] = false;
    }
}

int main(int argc, char** argv)
{
  int k;
  int r, c;
  int i;

  initialize_solve();

  scanf("%d", &k);
  
  for (i = 0; i < k; ++i)
    {
      scanf("%d %d", &r, &c);
      x[r][c] = true;
    }

  bktrack(0);
  return 0;
}


