#include <stdio.h>
int main(void)
{
  int n, i, j;
  int cards[4][13] = { {0} };
  char marks[4] = {'S', 'H', 'C', 'D'};
  char in_mark;
  int in_rank;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf(" %c %d", &in_mark, &in_rank);
    switch (in_mark) {
    case 'S':
      cards[0][in_rank - 1] = 1;
      break;
    case 'H':
      cards[1][in_rank - 1] = 1;
      break;
    case 'C':
      cards[2][in_rank - 1] = 1;
      break;
    case 'D':
      cards[3][in_rank - 1] = 1;
      break;
    }
  }
  for(i = 0; i < 4; i++) {
    for (j = 0; j < 13; j++) {
      if (cards[i][j] == 0) printf("%c %d\n", marks[i], j + 1);
    }
  }
     return 0;
}