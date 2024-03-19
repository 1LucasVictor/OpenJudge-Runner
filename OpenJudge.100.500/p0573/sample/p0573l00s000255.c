#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

char S[4];

int main()
{
  int cnt;
  int i;
  int bmap1 = 0;
  int bmap2 = 0;
  int i2=0xF;
  int cnt1 = 0;
  int cnt2 = 0;
  
  cnt = scanf("%s", &S);

  bmap1 = 1;
  cnt1++;
  for(i=1; i<4; i++) {
    if (S[0] == S[i]) {
      bmap1 |= (1 << i);
      cnt1++;
    }
  }
  if (cnt1 > 2) {
    printf("No");
    return 0;
  }
  for(i=0; i<4; i++) {
    if (bmap1 & (1 << i)) continue;

    if (i2 == 0xF) {
      i2=i;
      bmap2 |= (1 << i);
      continue;
    }
    if (S[i] == S[i2]) {
      bmap2 |= (1 << i);
      cnt2++;
    }
  }
  if (cnt2 > 2) {
    printf("No");
    return 0;
  }

  if (0xF == (bmap1 | bmap2)) {
    printf("Yes");
    return 0;
  }
  
  printf("No");
  return 0;
}

