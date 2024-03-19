#include <stdio.h>

int main () {
  char num[10], c=0;

  for (int i=0; i<3; i++) {
    scanf("%c", &num[i]);
  }
  for (int i=0; i<3; i++) {
    if (num[i]=='1')
     c++;
  }

  printf("%d\n", c);
  return 0;
}
