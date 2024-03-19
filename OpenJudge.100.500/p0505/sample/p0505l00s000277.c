/*
 * atcode153-b
 */

#include <stdio.h>
#include <stdlib.h>

int
comp_int(const void *p1, const void *p2)
{
  int *i1 = (int *)p1;
  int *i2 = (int *)p2;

  return (*i1 < *i2);
}

int
main(int argc, char *argv[])
{
  int *np;
  int h, n, i;

  scanf("%d", &h);
  scanf("%d", &n);
  np = (int *) malloc(n * sizeof (int));

  for (i = 0; i < n; i++) 
    scanf("%d", np+i);

  qsort(np, n, sizeof (int), comp_int); 

  if (np[0] + np[1] > h)
    printf("Yes\n");
  else
    printf("No\n");
  
  return (0);
}
