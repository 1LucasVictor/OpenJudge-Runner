#include <stdio.h> 

int main(void) {
  int i;
  char str[21];
  scanf("%s",str);
  for(i = strlen(str); i > 0; i-- ) {
    printf("%c",str[i-1]);
  }
  puts("");
  return 0;
}