#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

void run (void) {
  i32 x, a;
  scanf ("%" SCNi32 "%" SCNi32, &x, &a);
  printf ("%" PRIi32 "\n", x< a ? 0 : 10);
}

int main (void) {
  run();
  return 0;
}