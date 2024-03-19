#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;
typedef int64_t i64;

int can (char *s, i32 f, i32 t) {
  for (i32 i = f; i < t; ++i) {
    if (s[i] == '#' && s[i + 1] == '#') {
      return 0;
    }
  }
  return 1;
}

void run (void) {
  i32 n, a, b, c, d;
  scanf ("%" SCNi32 "%" SCNi32 "%" SCNi32 "%" SCNi32 "%" SCNi32, &n, &a, &b, &c, &d);
  a--; b--; c--; d--;
  char *s = (char *) calloc (n + 3, sizeof (char)) + 1;
  scanf ("%s", s);
  s[-1] = s[n] = s[n + 1] = '#';
  if (!(can (s, a, c) && can (s, b, d))) {
    puts ("No");
    return;
  }
  if (c > d) {
    i32 ok = 0;
    for (i32 i = b; i <= d && !ok; ++i) {
      if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
	ok = 1;
      }
    }
    if (!ok) {
      puts ("No");
      return;
    }
  }
  puts ("Yes");
}

int main (void) {
  run();
  return 0;
}
