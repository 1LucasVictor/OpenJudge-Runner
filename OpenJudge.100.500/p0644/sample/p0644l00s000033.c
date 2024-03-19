#include <stdio.h>

int main() {
  char cells[3];
  int count = 0;
  
  scanf("%s", cells);
  
  for (int i = 0; i < 3; i++) {
    if (cells[i] == '1') count++;
  }
  
  printf("%d\n", count);  
  return 0;
}