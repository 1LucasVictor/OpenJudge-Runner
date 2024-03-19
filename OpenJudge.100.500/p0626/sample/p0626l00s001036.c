#include <stdio.h>

int
main(int argc, char *argv[])
{
  int d, n;
  scanf("%d %d", &d, &n);

  int ans = 1;
  if(d != 0){
    for(int i = 0; i < d; i++) ans *= 100;
  }

  if(n == 100) n = 101;

  ans *= n;

  printf("%d\n", ans);

  return 0;
}