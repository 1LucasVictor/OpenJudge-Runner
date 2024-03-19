#include <stdio.h>
#include <string.h>

int main(void);

int main(void){
  char CARDs[201];
  char LOCAL_CARDs1[201];
  char LOCAL_CARDs2[201];
  int  shuffle;
  int  get_cards;
  int  cards_count;

  while(1){
    scanf("%s", CARDs);
    if (CARDs[0] == '-') {
      break;
    }
    scanf("%d", &shuffle);

    cards_count = strlen(CARDs);

    for (int i = 0; i < shuffle; i++) {
      scanf("%d", &get_cards);

      strncpy(LOCAL_CARDs2, CARDs, get_cards);
      LOCAL_CARDs2[get_cards] = '\0';

      strncpy(LOCAL_CARDs1, CARDs + get_cards, cards_count - get_cards);
      LOCAL_CARDs1[cards_count-get_cards] = '\0';

      strcat(LOCAL_CARDs1, LOCAL_CARDs2);

      memmove(CARDs, LOCAL_CARDs1, cards_count);
      CARDs[cards_count] = '\0';
    }

    printf("%s\n", CARDs);
  }

  return 0;
}

