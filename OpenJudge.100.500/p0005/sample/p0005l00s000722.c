#include <stdio.h>
#include <string.h>

#define MAX 10000

int main(void) {
  char str[MAX];
  int length;

  scanf("%s", str);

  length = strlen(str);

  for(int i=length-1; i >= 0; --i) {
    printf("%c", str[i]);
  }
  printf("\n");

  return 0;
}

