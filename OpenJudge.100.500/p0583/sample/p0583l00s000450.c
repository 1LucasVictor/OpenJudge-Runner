#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<math.h>

typedef int32_t i32;
typedef int64_t i64;

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) > (0) ? (a) : -(a))

int can (char *s, i32 a, i32 t) {
  i32 now = a;
  while (now < t) {
    if (s[now + 1] == '#' && s[now + 2] == '#') return 0;
    if (s[now + 1] == '#') {
      now += 2;
    } else {
      now += 1;
    }
  }
  return now == t;
}

void run (void) {
  i32 n, a, b, c, d;
  scanf ("%" SCNi32 "%" SCNi32 "%" SCNi32 "%" SCNi32 "%" SCNi32, &n, &a, &b, &c, &d);
  a--;
  b--;
  c--;
  d--;
  char *s = (char *) calloc (n + 3, sizeof (char)) + 1;
  scanf ("%s", s);
  s[-1] = s[n] = s[n + 1] = '#';
  if (!(can (s, a, c) && can (s, b, d))) {
    puts ("No");
    return;
  }
  if (c > d) {
    i32 ok = 0;
    for (i32 i = b; i <= d; ++i) {
      if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.' && can (s, a, i - 1)) {
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
