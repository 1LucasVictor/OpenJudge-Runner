#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

void run (void) {
  i32 a, b, t;
  scanf ("%" SCNi32 "%" SCNi32 "%" SCNi32, &a, &b, &t);
  i32 ans = 0;
  while (t >= a) {
    t -= a;
    ans += b;
  }
  printf ("%" PRIi32 "\n", ans);
}

int main (void) {
  run();
  return 0;
}