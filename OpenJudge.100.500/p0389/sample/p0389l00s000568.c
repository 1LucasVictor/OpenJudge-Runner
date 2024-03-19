#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *deck, *deck_b, *deck_t;
  int m = 0, h = 0, i = 0;
  deck = (char *)calloc(210, sizeof(char));
  deck_b = (char *)calloc(210, sizeof(char));
  deck_t = (char *)calloc(210, sizeof(char));

  while (1) {
    scanf("%s\n", deck);
    if (!strcmp(deck, "-")) break;
    scanf("%d\n", &m);
    for (i = 0; i < m ; i++) {
      scanf("%d\n", &h);
      strncpy(deck_b, deck, h);
      strcpy(deck_t, (deck + h));
      strcat(deck_t, deck_b);
      strcpy(deck, deck_t);
      free(deck_t);
      free(deck_b);
      deck_b = (char *)calloc(210, sizeof(char));
      deck_t = (char *)calloc(210, sizeof(char));
    }
    printf("%s\n", deck);
  }

  free(deck);
  free(deck_t);
  free(deck_b);

  return 0;
}
