#include<stdio.h>
#include<stdlib.h>
#define LINE_BUF_SIZE 1024

int power(int a, int b) {
        int ret = 1;
        while (b-- > 0) {
                ret *= a;
        }
        return ret;
}

int main() {
  char line[LINE_BUF_SIZE];
  int a, b;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &a, &b);
        printf("%d", b * power(100, a));
  return 0;
}