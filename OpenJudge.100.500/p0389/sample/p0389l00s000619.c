#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char deck[200 + 1];
  char tmp[2][200 + 1];
  int len;
  int m, h, i;

  while (1) {
    scanf("%s", deck);
    if (!strcmp(deck, "-")) break;
    len = strlen(deck);

    scanf("%d", &m);

    for (i = 0; i < m; i++) {
      scanf("%d", &h);
      
      strncpy(tmp[0], deck, h);
      tmp[0][h] = '\0';
      strcpy(tmp[1], &deck[h]);
      
      strcpy(deck, tmp[1]);
      strcpy(&deck[len - h], tmp[0]);
    }
    printf("%s\n", deck);
  }

  return 0;
}