#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N;
  scanf("%d", &N);
  int n7 = 0;
  char buf[4];
  fprintf(stderr, "%d\n", N);
  sprintf(buf, "%d", N);
  for (int i=0;i<3;i++)
    if (buf[i] == '7')
      n7++;
  if (n7>0)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}