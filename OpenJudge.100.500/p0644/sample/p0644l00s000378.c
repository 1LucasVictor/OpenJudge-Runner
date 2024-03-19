#include <stdio.h>

int main(void) {
  char line[512];
  FILE *fp;
  fp = stdin;
  if(!fgets(line, 512, fp)) return 0;
  int mass = 3;
  char res = 0;
  int i;
  for(i = 0; i < mass; i++) {
    res += (line[i] - '0');
  }
  printf("%d\n", res);
  return 0;
}