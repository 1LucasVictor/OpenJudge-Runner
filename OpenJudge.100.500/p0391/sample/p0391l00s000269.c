#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(char *str, int a, int b) {
  while (a <= b) {
    printf("%c", str[a]);
    a++;
  }
  printf("\n");
}

void replace(char *str, int a, int b, char *repstr) {
  strncpy(str+a, repstr, b - a + 1);
}

void reverse(char *str, int a, int b) {
  char holder;
  while (a < b) {
    holder = str[a];
    str[a] = str[b];
    str[b] = holder;
    a++;
    b--;
  }
}

int main(void)
{
  char str[1001];
  char command[8];
  int q, i, a, b;
  scanf(" %s", str);
  scanf(" %d", &q);
  for (i = 0; i < q; i++)
    {
      scanf(" %s %d %d", command, &a, &b);
      if (!strcmp(command, "print"))
	print(str, a, b);
      else if (!strcmp(command, "replace"))
	{
	  char *repstr = (char *) malloc(b - a + 2);
	  scanf(" %s", repstr);
	  replace(str, a, b, repstr);
	  free(repstr);
	}
      else
	reverse(str, a, b);
    }
  return 0;
}

