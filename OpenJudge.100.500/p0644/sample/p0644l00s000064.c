#include<stdio.h>
int main(void) {
  char s[3];
  scanf("%c%c%c", &s[0], &s[1], &s[2]);
  int c = 0;
  if(s[0] == '1') {
    c++;
  }
  if(s[1] == '1') {
    c++;
  }
  if(s[2] == '1') {
    c++;
  }
  printf("%d\n", c);
  return 0;
}