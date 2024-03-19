#include <stdio.h>

int main(void)
{
  int n;
  int s;
  int i;

  scanf("%d", &n);
  s = 100000;

  for (i = 0; i < n; i++){
    s += s / 20;
    if(s % 1000){
      s = (s / 1000 * 1000) + 1000;
    }
  }

  printf("%d\n", s);

  return 0;

}