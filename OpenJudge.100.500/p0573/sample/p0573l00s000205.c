#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

#define SORT(a,num,cmp) qsort((a),(num),sizeof(*(a)),cmp)

int cmp_char (const void *a, const void *b) {
  i32 d = *(char *)a - *(char *)b;
  return d == 0 ? 0 : d < 0 ? -1 : 1;
}

void run (void) {
  char s[5];
  scanf ("%s", s);
  SORT (s, 4, cmp_char);
  puts (s[0] == s[1] && s[1] != s[2] && s[2] == s[3] ? "Yes" : "No");
}

int main (void) {
  run();
  return 0;
}