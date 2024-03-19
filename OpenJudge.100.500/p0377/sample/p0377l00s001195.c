#include <stdio.h>

int main(void) {
  int i, j;
  int data[4][13] = { {0} };
  int cards, num;
  char suit;

  scanf("%d", &cards);

  for (i = 0; i < cards; i++) {
    scanf("%*c%c %d", &suit, &num);

    if (suit == 'S') {
      data[0][num - 1] = 1;
    } else if (suit == 'H') {
      data[1][num - 1] = 1;
    } else if (suit == 'C') {
      data[2][num - 1] = 1;
    } else {
      data[3][num - 1] = 1;
    }

  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 13; j++) {
      if (data[i][j] == 0) {
        switch (i) {
          case 0 : printf("S %d\n", j + 1); break;
          case 1 : printf("H %d\n", j + 1); break;
          case 2 : printf("C %d\n", j + 1); break;
          case 3 : printf("D %d\n", j + 1); break;
        }
      }
    }
  }

  return 0;
}

