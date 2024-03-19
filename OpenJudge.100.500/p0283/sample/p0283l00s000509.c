#include <stdio.h>

int distribute(int board[8][8], int *v, int *h, int *s, int *d, int n);

int main(int argc, char *argv[])
{
  int board[8][8];
  int k, r, c, i, j;
  int vertical[8];
  int horizontal[8];
  int sum[15];
  int diff[15];

  scanf("%d", &k);

  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) board[i][j] = 0;
    vertical[i] = 0;
    horizontal[i] = 0;
  }

  for (i = 0; i < 15; i++) {
    sum[i] = 0;
    diff[i] = 0;
  }
  
  for (i = 0; i < k; i++) {
    scanf("%d", &r);
    scanf("%d", &c);

    board[r][c] = 1;
    horizontal[r] = 1;
    vertical[c] = 1;
    sum[r+c] = 1;
    diff[r-c+7] = 1;
  }

  distribute(board, vertical, horizontal, sum, diff, 8 - k);

  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      if (board[i][j] == 0) printf(".");
      else printf("Q");
    }
    printf("\n");
  }

  return 0;
}

int distribute(int board[8][8], int *v, int *h, int *s, int *d, int n)
{
  int r, c;
  int res;

  if (n == 0) return 1;

  for (r = 0; r < 8; r++) {
    if (h[r] == 0) {
      for (c = 0; c < 8; c++) {
	if (v[c] == 0) {
	  if (s[r+c] == 0 && d[r-c+7] == 0) {
	    board[r][c] = 1;
	    h[r] = 1;
	    v[c] = 1;
	    s[r+c] = 1;
	    d[r-c+7] = 1;
	    res = distribute(board, v, h, s, d, n - 1);
	    if (res == 1) return 1;
	    else {
	      board[r][c] = 0;
	      h[r] = 0;
	      v[c] = 0;
	      s[r+c] = 0;
	      d[r-c+7] = 0;
	    }
	  }
	}
      }
    }
  }
  return 0;
}