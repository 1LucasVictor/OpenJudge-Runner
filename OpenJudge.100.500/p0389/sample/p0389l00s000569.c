#include <stdio.h>
#include <string.h>

int main(void) {
  char s[201];
  while (scanf("%s", s), strcmp(s, "-")) {
    int m;
    scanf("%d", &m);

    int idx=0, i;
    for (i=0; i<m; i++) {
      int h;
      scanf("%d", &h);
      idx+=h;
    }

    int len=strlen(s);
    idx%=len;

    printf("%s%.*s\n", &s[idx], idx, s);
  }
}
