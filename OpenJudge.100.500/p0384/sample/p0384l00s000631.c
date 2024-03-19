#include <stdio.h>
#include <string.h>

int main(){
  char c;
  while(scanf("%c", &c) != EOF) {
    if(c == '\n') {
      break;
    }
    if('a' <= c && c <= 'z') {
      c = c - 0x20;
    } else if ('A' <= c && c <= 'Z') {
      c = c + 0x20;
    }
    printf("%c", c);
  }
  printf("\n");
  return 0;
}

