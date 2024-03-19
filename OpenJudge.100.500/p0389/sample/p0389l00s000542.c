#include <stdio.h>
#include <string.h>

int main(void){
  int m, h;
  int i, k, len;
  char card[201];

  scanf(" %s", card);
  while(strcmp(card, "-")){
    scanf("%d", &m);
    len = (int)strlen(card);
    k = 0;
    for(i = 0; i < m; i++){
      scanf("%d", &h);
      k = (k + h) % len;
    }
    for(i = 0; i < len; i++){
      printf("%c", card[(i+k)%len]);
    }
    printf("\n");
    scanf(" %s", card);
  }
  return 0;
}