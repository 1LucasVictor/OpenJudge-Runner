#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mk = "SHCD";
int get_index(char c)
{
  int i;
  for (i=0; i<4; i++) {
   if (c == *(mk+i))
     return i;
  }
  return -1;
}

int main()
{
  static char tramp[13][4];
  int len;
  int i,j;
  char str[256];

  fgets(str, sizeof(str), stdin);
  sscanf(str, "%d", &len);

  for (i=0; i<len; i++) {
    char m;
    int v;
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%c %d", &m, &v);
    tramp[v-1][get_index(m)] = 1;
  }

  for (i=0; i<4; i++) {
    for (j=0; j<13; j++) {
      if (!tramp[j][i])
        printf("%c %d\n", *(mk+i), j+1);
    }
  }

  return 0;
}