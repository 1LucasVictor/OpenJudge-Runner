#include <stdio.h>

int main()
{
  char cells[4] = {0};
  int count = 0;
  int i;
  
  scanf("%s", cells);
  
  for (i = 0; i < 3; i++) {
    if (cells[i] == '1') {
      count++;
    }
  }
  
  printf("%d\n", count);
  
  return 0;
}