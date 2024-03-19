#include <stdio.h>
int main() {
  int input, sec, min, hour;
  scanf("%d", &input);
  hour = input / 3600;
  min = (input - hour * 3600) / 60;
  sec = input - (hour * 3600 + min *60);
  printf("%d:%d:%d\n", hour, min, sec);
  return 0;
}