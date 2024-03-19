#include <stdio.h>
#include <string.h>

int main() {
  char card[201], temp[201];
  int m, h;

  do {
    scanf("%s", card);
    if (strcmp(card, "-") != 0) {
      scanf("%d", &m);
      
      int k = 0;
      for (int i = 0; i < m; i++) {
        scanf("%d", &h);
        k = k + h;   
      }      

      int n = strlen(card);
      for (int i = 0; i < n; i++) {
        printf("%c", card[(k+i) % n]);
      }
      printf("\n");  
    }
  } while (strcmp(card, "-") != 0);

  return 0;
}
