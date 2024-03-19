#include <stdio.h>

int
main(int argc, char *argv[])
{
  int a, b;
  scanf("%d %d", &a, &b);

  if(b <= 8 && a <= 8) printf("Yay!\n");
  else printf(":(\n");

  return 0;
}
