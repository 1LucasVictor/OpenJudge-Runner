#include <stdio.h>

int main() {
  int n;
  char suits[52];
  int ranks[52];
  int i, j;

  int cards[4][14] = {{}};

  scanf("%d ", &n);
  for(i = 0; i < n; ++i) {
    scanf("%c %d ", &suits[i], &ranks[i]);

    if(suits[i] == 'S') {
      cards[0][ranks[i]] = 1;
    } else if(suits[i] == 'H') {
      cards[1][ranks[i]] = 1;
    } else if(suits[i] == 'C') {
      cards[2][ranks[i]] = 1;
    } else if(suits[i] == 'D') {
      cards[3][ranks[i]] = 1;
    }
  }

  for(i = 0; i < 4; ++i) {
    for(j = 1; j <= 13; ++j) {
      if(cards[i][j] == 0) {
	if(i == 0) printf("S ");
	else if(i == 1) printf("H ");
	else if(i == 2) printf("C ");
	else if(i == 3) printf("D ");
	printf("%d\n", j);
      }
    }
  }

  return 0;
}

