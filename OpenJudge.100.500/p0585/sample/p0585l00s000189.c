#include <stdio.h>
#include <stdint.h>

int getNumsInt32(int32_t *buf, int32_t num)
{
  int32_t i;

  for (i = 0; i < num; i++) {
    if (scanf("%d", &buf[i]) == EOF) {
      return -1;
    }
  }
  return 0;
}

int main()
{
  int32_t val[3];
  float time;
  int32_t ans;

  if (getNumsInt32((int32_t *)val, (int32_t)3) == -1) {
    return -1;
  }

  time = (float)val[2] + (float)0.5;

  ans = ((uint32_t)(time / val[0])) * val[1];

  printf("%d\n", ans);

  return 0;
}