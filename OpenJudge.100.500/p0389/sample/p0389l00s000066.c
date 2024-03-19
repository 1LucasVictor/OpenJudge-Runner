#include <stdio.h>
#include <string.h>

#define NUM 256

int main(void){
  char card[NUM] = {0}, cardcpy[NUM] = {0};
  int m, h, i, j, k;
  
  for (;;) {
    scanf("%s", card);
    if (!strcmp(card, "-"))
      break;
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
      scanf("%d", &h);
      strncpy(cardcpy, card, h);
      // shift to front
      for (j = h; j < strlen(card); j++)
	card[j - h] = card[j];
      // put into back
      for (k = 0; k < h; k++)
	card[strlen(card) - h + k] = cardcpy[k];
    }
    printf("%s\n", card);
  }
  
  return 0;
}