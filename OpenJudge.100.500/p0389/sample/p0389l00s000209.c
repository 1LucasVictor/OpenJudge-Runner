#include <stdio.h>
#include <string.h>

int main(void)
{
  char card[201];
  int m;
  int h[100] = {0};
  int i, j, k;
  char shuffle[201];

  while(1) {
    scanf("%s", card);

    if(card[0] == '-')
      break;

    strcpy(shuffle, card);
      
    scanf("%d", &m);

    for(i = 0; i < m; i++)
      scanf("%d", &h[i]);

    for(i = 0; i < m; i++){
      for(j = h[i], k = 0; j < strlen(card); j++, k++)
	shuffle[k] = card[j];

      for(j = 0; j < h[i]; j++, k++)
	shuffle[k] = card[j];
      
      strcpy(card, shuffle);
    }
    
    printf("%s\n", card);
  }

  return 0;
}