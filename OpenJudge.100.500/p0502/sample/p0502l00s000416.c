#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  unsigned int i;
  unsigned int n;
  unsigned int *p;
  unsigned int flag;

  scanf("%d", &n);
  p = (int *)malloc(sizeof(unsigned int) * n);
  if (!p) return (1);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &p[i]);
  }

  flag = 1;
  for (i = 0; i < n; i++)
  {
    if ((p[i] % 2) != 0) continue;
    if ((p[i] % 3) == 0) ;
    else if ((p[i] % 5) == 0) ;
    else
    {
      flag = 0;
      break;
    }
  }
  if (flag)
    printf("APPROVED\n");
  else
    printf("DENIED\n");

  free(p);
  return (0);
}
