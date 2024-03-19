#include <stdio.h>
#include <stdlib.h>

int cmp(const void *l, const void *r)
{
  return *(int*)l - *(int*)r;
}

int main()
{
  int abc[3];
  scanf("%d %d %d", &abc[0], &abc[1], &abc[2]);
  qsort(abc, 3, sizeof(int), cmp);

  if (abc[0] == 5 && abc[1] == 5 && abc[2] == 7) {
    puts("YES");
  }
  else {
    puts("NO");
  }

  return 0;
}