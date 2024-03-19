#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char str[1000 + 3];
  int q, i, j;
  char cmd[8];
  int a, b;
  char p[1000 + 3];
  char tmp;

  scanf("%s", str);
  scanf("%d", &q);

  for (i = 0; i < q; i++) {
    scanf("%s", cmd);
    
    if (!strcmp(cmd, "replace")) {
      scanf("%d %d %s", &a, &b, p);
      strncpy(&str[a], p, b - a + 1);
    } else if (!strcmp(cmd, "reverse")) {
      scanf("%d %d", &a, &b);
      for (j = 0; j < (b - a + 1) / 2; j++) {
        tmp = str[b-j];
        str[b-j] = str[a+j];
        str[a+j] = tmp;
      }
    } else if (!strcmp(cmd, "print")) {
      scanf("%d %d", &a, &b);
      for (j = a; j <= b; j++) printf("%c", str[j]);
      printf("\n");
    }
  }

  return 0;
}