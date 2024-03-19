#include <stdio.h>
#include<stdlib.h>

int row[8], col[8], dpos[8 * 2 - 1], dneg[8 * 2 - 1];

void recursive(int);
void printboard(void);
int main(void)
{
  int i, k, r, c;
    scanf("%d", &k);
  for (i = 0; i < k; i++) {
    scanf("%d %d", &r, &c);
    row[r] = c + 1;
    col[c] = dpos[r+c] = dneg[r-c+7]=1;
  }
  recursive(0);
}
void recursive(int k)
{
  int i, j;
  if (k == 8) {
    for (i = 0; i < 8; i++) {
      for (j = 0; j < 8; j++) {
        printf("%c", (row[i] == j + 1) ? 'Q' : '.');
      }
      putchar('\n');
    }
    return;
  }
  if (row[k]) {
    recursive(k + 1);
    return;
  } else {
    for (i = 0; i < 8; i++) {
      if ( col[i] || dpos[k+i] || dneg[k-i+7]) continue;
      row[k] = i + 1;
      col[i] = dpos[k+i] = dneg[k-i+7] = 1;
      recursive(k + 1);
      row[k] = col[i] = dpos[k+i] = dneg[k-i+7] = 0;
    }
  }
}
