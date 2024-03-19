#include<stdio.h>
#include<stdlib.h>
#define LINE_BUF_SIZE 1024

int main() {
  char line[LINE_BUF_SIZE];
  int a, b;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &a, &b);

        if (a == 0) {
                printf("%d", b);
        } else if (a == 1) {
                printf("%d", b*100);
        } else if (a == 2) {
                printf("%d", b*10000);
        } else {
                printf("error");
        }

  return 0;
}