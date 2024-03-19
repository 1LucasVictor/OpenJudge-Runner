#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <memory.h>
#include <math.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) > (b)) ? (b) : (a))
#define SWAP(t, a, b) do{t c = a; a = b; b = c;}while(0)

int main (int argc, char **argv)
{
  int64_t a = 0;
  int64_t b = 0;
  int64_t c = 0;

  scanf("%lld %lld %lld", &a, &b ,&c);

  printf("%lld\n", (((a - b) > c) ? (0) : (c -(a - b))));

  return 0;
}
