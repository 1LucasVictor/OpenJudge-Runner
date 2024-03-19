/*
 * atcode154-c
 */

#include <stdio.h>
#include <stdlib.h>

int
comp_int(const void *p1, const void *p2)
{
  int *i1 = (int *)p1;
  int *i2 = (int *)p2;

  return (*i1 > *i2);
}

int
main(int argc, char *argv[])
{
  int *np;
  int n, i;

  scanf("%d", &n);
  np = (int *) malloc(n * sizeof (int));

  for (i = 0; i < n; i++) 
    scanf("%d", np+i);

  qsort(np, n, sizeof (int), comp_int); 

  for (i = 0; i < n - 1; i++) {
    if (np[i] == np[i+1]) {
      printf("NO\n");
      return (0);
    }
  }
  printf("YES\n");
  return (0);
}
