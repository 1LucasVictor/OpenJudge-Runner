#include<stdio.h>
#include<stdlib.h>
#define LINE_BUF_SIZE 1024

int main() {
  char line[LINE_BUF_SIZE];
  int a, b;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &a, &b);
        if (a < 9 && b < 9) {
                printf("Yay!");
        } else {
                printf(":(");
        }
  return 0;
}