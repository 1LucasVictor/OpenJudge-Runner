#include <stdio.h>
#include <stdlib.h>

int
check(int num)
{
  if ((num % 2) == 1)
    return (1);
  if (((num % 3) == 0) || ((num % 5) == 0))
    return (1);
  return (0);
}

int
main(int argc, char *argv[])
{
  int *a;
  int n;
  int i;
  int approved = 1;
  
  scanf("%d", &n);
  a = (int *) malloc(n * sizeof (int));
  
  for (i = 0; i < n; i++)
    scanf("%d", a+i);
  
  for (i = 0; i < n; i++) {
    approved = check(a[i]);
    if (!approved) {
      printf("DENIED");
      return (0);
    }
  }
  printf("APPROVED");
}
    
