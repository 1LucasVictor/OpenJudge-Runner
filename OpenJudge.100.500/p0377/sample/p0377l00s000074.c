#include <stdio.h>

struct card_tag {
  char mark;
  int number;
};
typedef struct card_tag card;

int
main(void)
{
  int count, i, j, k;
  char mark[] = {'S', 'H', 'C', 'D'};

  scanf("%d", &count);
  card data[count];

  // input card
  for(i = 0; i < count; i++) {
    scanf(" %c %d", &data[i].mark, &data[i].number);
  }

  // check and print
  for (j = 0; j < 4; j++) {
    for (i = 1; i <= 13; i++) {
      int check = 0;
      for (k = 0; k < count; k++) {
        if (data[k].mark == mark[j] && data[k].number == i) {
          check++;
        }
      }
      if (check == 0) {
        printf("%c %d\n", mark[j], i);
      }
    }
  }

  return 0;
}