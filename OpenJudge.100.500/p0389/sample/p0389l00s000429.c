#include <stdio.h>

int main(void) {
  int m,h,lencard,i,j,a = 0;
  char card[201],cardsub[101];

  while(1){
    first:
    for(i = 0; i < 200; i++){
      card[i] = getchar();
      if(card[i] == '\n')break;
    }
    lencard = i;
    if(lencard == 0){
      goto first;
    }
    if(lencard == 1)break;

    scanf("%d",&m);
    for(i = 0; i < m; i++){
      scanf("%d",&h);
      for(j = 0; j < h; j++){
        cardsub[j] = card[j];
      }
      for(j = 0; j < lencard; j++){
        card[j] = card[j + h];
      }
      int k = 0;
      for(j = lencard - h; j < lencard; j++){
        card[j] = cardsub[k];
        k++;
      }
    }
    for(i = 0; i < lencard; i++)printf("%c",card[i]);
    printf("\n");
    a++;
  }
  return 0;
}
