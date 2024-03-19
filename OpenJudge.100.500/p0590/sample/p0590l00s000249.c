#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

void run (void) {
  i32 a[6];
  for (i32 i = 0; i < 6; ++i) {
    scanf ("%" SCNi32, a + i);
  }
  puts(a[4] - a[0] <= a[5] ? "Yay!" : ":(");
}

int main (void) {
  run ();
  return 0;
}
