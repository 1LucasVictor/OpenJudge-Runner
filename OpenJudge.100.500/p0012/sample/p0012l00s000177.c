#include <stdio.h>

int main() {
  int in;
  int buffer[100];
  int p;

  p = -1;
  while(scanf("%d", &in) != EOF) {
    if(in == 0) {
      printf("%d\n", buffer[p--]);
    } else {
      buffer[++p] = in;
    }
  }
  return 0;
}