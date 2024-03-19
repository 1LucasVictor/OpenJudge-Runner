#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

void run (void) {
  char s[5];
  scanf ("%s", s);
  for (i32 i = 0; i < 3; ++i) {
    if (s[i] == s[i + 1]) {
      puts ("Bad");
      return;
    }
  }
  puts ("Good");
}

int main (void) {
  run();
  return 0;
}