#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

typedef unsigned long long int uint64;
typedef long long int          int64;

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))


void get_AB (uint64 *a, uint64 *b)
{
  int cnt;
  
  cnt = scanf("%lld %lld", a, b);

  return;
}

int main()
{
  int cnt;
  uint64 i,j;
  uint64 L,R;
  uint64 modv;
  uint64 mini = 3000;
#if 0
  uint64 minj = 3000;
  uint64 ii = 0;
  uint64 jj = 0;
#endif
  uint64 limit = 0;

  get_AB(&L, &R);

#if 0
  if ((R - L + 1) >= 2019) {
    printf("0");
    return 0;
  }
#endif

  limit = MIN (R, L+2020);
  for (i=L; i<=limit; i++) {
    for (j=L; j<limit; j++) {
      if (i==j) continue;
      modv = (i*j)%2019;
      mini = MIN(mini, modv);
    }
  }

  printf("%lld", (mini));
  
#if 0
  for (i=L; i<=limit; i++) {
    modv = i % 2019;
    mini = MIN(modv, mini);
    if (mini == modv) ii=i;
  }
  for (i=L; i<=limit; i++) {
    if (i == ii) continue;
    modv = i % 2019;
    minj = MIN(modv, minj);
    if (minj == modv) jj=i;
  }

  printf("%lld", ((ii*jj)%2019));
#endif

  return 0;
}

